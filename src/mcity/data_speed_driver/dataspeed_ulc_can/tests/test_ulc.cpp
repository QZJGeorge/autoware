#include <gtest/gtest.h>

#include <can_msgs/msg/frame.hpp>
#include <dataspeed_ulc_can/dispatch.hpp>
#include <dataspeed_ulc_msgs/msg/ulc_cmd.hpp>
#include <dataspeed_ulc_msgs/msg/ulc_report.hpp>
#include <geometry_msgs/msg/twist_stamped.hpp>
#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/bool.hpp>

#include "MsgRx.hpp"

using namespace dataspeed_ulc_can;
using namespace std::chrono_literals;  // for "ms" and "s" numeric time operators

class UlcTestFixture : public testing::Test {
  public:
    UlcTestFixture()
        : node(std::make_shared<rclcpp::Node>("ulc_node_test")),
          msg_ulc_cmd(50ms, node), msg_ulc_cfg(50ms, node), msg_ulc_report(50ms, node)
    {}

    void SetUp() override {
      auto latch_like_qos = rclcpp::QoS(2).transient_local();
      sub_can = node->create_subscription<can_msgs::msg::Frame>("can_tx", 100, std::bind(&UlcTestFixture::recvCan, this, std::placeholders::_1));
      sub_report = node->create_subscription<dataspeed_ulc_msgs::msg::UlcReport>("ulc_report", 10, std::bind(&UlcTestFixture::recvReport, this, std::placeholders::_1));
      pub_ulc_cmd = node->create_publisher<dataspeed_ulc_msgs::msg::UlcCmd>("ulc_cmd", 2);
      pub_enable = node->create_publisher<std_msgs::msg::Bool>("dbw_enabled", latch_like_qos);
      pub_twist = node->create_publisher<geometry_msgs::msg::Twist>("cmd_vel", 2);
      pub_twist_stamped = node->create_publisher<geometry_msgs::msg::TwistStamped>("cmd_vel_stamped", 2);
      pub_can = node->create_publisher<can_msgs::msg::Frame>("can_rx", 100);
      cfg_freq = node->declare_parameter("config_frequency", 5.0);
    }

    void TearDown() override {}

  protected:
    rclcpp::Node::SharedPtr node;
    MsgRx<MsgUlcCmd> msg_ulc_cmd;
    MsgRx<MsgUlcCfg> msg_ulc_cfg;
    MsgRx<dataspeed_ulc_msgs::msg::UlcReport> msg_ulc_report;

    dataspeed_ulc_msgs::msg::UlcCmd ulc_cmd;

    rclcpp::Subscription<can_msgs::msg::Frame>::SharedPtr sub_can;
    rclcpp::Subscription<dataspeed_ulc_msgs::msg::UlcReport>::SharedPtr sub_report;
    rclcpp::Publisher<dataspeed_ulc_msgs::msg::UlcCmd>::SharedPtr pub_ulc_cmd;
    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr pub_twist;
    rclcpp::Publisher<geometry_msgs::msg::TwistStamped>::SharedPtr pub_twist_stamped;
    rclcpp::Publisher<std_msgs::msg::Bool>::SharedPtr pub_enable;
    rclcpp::Publisher<can_msgs::msg::Frame>::SharedPtr pub_can;
    double cfg_freq;

    // Command message scale factors
    const double LIN_VEL_SCALE_FACTOR = 0.0025;
    const double ACCEL_CMD_SCALE_FACTOR = 0.0005;
    const double YAW_RATE_SCALE_FACTOR = 0.00025;
    const double CURVATURE_SCALE_FACTOR = 0.0000061;

    // Config message scale factors
    const double LINEAR_ACCEL_SCALE_FACTOR = 0.025;
    const double LINEAR_DECEL_SCALE_FACTOR = 0.025;
    const double LATERAL_ACCEL_SCALE_FACTOR = 0.05;
    const double ANGULAR_ACCEL_SCALE_FACTOR = 0.02;
    const double JERK_LIMIT_THROTTLE_SCALE_FACTOR = 0.1;
    const double JERK_LIMIT_BRAKE_SCALE_FACTOR = 0.1;

    // Report message scale factors
    const double SPEED_REPORT_SCALE_FACTOR = 0.02;
    const double ACCEL_REPORT_SCALE_FACTOR = 0.05;
    const double MAX_ANGLE_SCALE_FACTOR = 5.0;
    const double MAX_RATE_SCALE_FACTOR = 8.0;

    bool waitForTopics(const nanoseconds& dur) {
      const auto start = node->get_clock()->now();
      while (true) {
        if ((sub_can->get_publisher_count() == 1) && (sub_report->get_publisher_count() == 1) &&
            (pub_ulc_cmd->get_subscription_count() == 1) && (pub_enable->get_subscription_count() == 1) &&
            (pub_twist->get_subscription_count() == 1) && (pub_twist_stamped->get_subscription_count() == 1) &&
            (pub_can->get_subscription_count() == 1)) {
          return true;
        }
        if ((node->get_clock()->now() - start) > dur) {
          return false;
        }
        rclcpp::sleep_for(1ms);
        rclcpp::spin_some(node);
      }
    }

    void checkImmediateCfg() {
      const auto stamp = node->get_clock()->now();
      msg_ulc_cfg.clear();
      pub_ulc_cmd->publish(ulc_cmd);
      EXPECT_TRUE(waitForMsg(150ms, msg_ulc_cfg));
      EXPECT_NEAR(msg_ulc_cfg.stamp().nanoseconds(), stamp.nanoseconds(), 1e7);
    }

    template <class T>
    bool waitForMsg(const nanoseconds& dur, const MsgRx<T>& msg_rx) {
      const auto start = node->get_clock()->now();
      while (true) {
        if (msg_rx.fresh()) {
          return true;
        }
        if ((node->get_clock()->now().nanoseconds() - start.nanoseconds()) > dur.count()) {
          return false;
        }
        rclcpp::sleep_for(1ms);
        rclcpp::spin_some(node);
      }
    }

  private:
    void recvCan(const can_msgs::msg::Frame::ConstSharedPtr msg) {
      if (!msg->is_rtr && !msg->is_error && !msg->is_extended) {
        switch (msg->id) {
          case ID_ULC_CMD: {
            auto cmd = reinterpret_cast<const MsgUlcCmd*>(msg->data.data());
            msg_ulc_cmd.set(*cmd);
            break;
          }
          case ID_ULC_CONFIG: {
            auto cmd = reinterpret_cast<const MsgUlcCfg*>(msg->data.data());
            msg_ulc_cfg.set(*cmd);
            break;
          }
        }
      }
    }

    void recvReport(const dataspeed_ulc_msgs::msg::UlcReport::ConstSharedPtr msg) {
      msg_ulc_report.set(*msg);
    }
};

TEST_F(UlcTestFixture, TopicsAlive) {
  ASSERT_TRUE(waitForTopics(5s));
}

TEST_F(UlcTestFixture, CfgTiming) {
  ASSERT_TRUE(waitForTopics(5s));
  ulc_cmd.linear_accel = 1.0;
  ulc_cmd.linear_decel = 1.0;
  ulc_cmd.jerk_limit_throttle = 10.0;
  ulc_cmd.jerk_limit_brake = 10.0;
  ulc_cmd.lateral_accel = 1.0;
  ulc_cmd.angular_accel = 1.0;

  // Publish command messages with the same acceleration limits and make sure
  // config CAN messages are sent at the nominal rate
  size_t count = 0;
  const auto end_time = node->get_clock()->now() + 1s;
  msg_ulc_cfg.clear();
  auto time_old = msg_ulc_cfg.stamp();
  while ((uint64_t)end_time.nanoseconds() > (uint64_t)(node->get_clock()->now().nanoseconds())) {
    pub_ulc_cmd->publish(ulc_cmd);
    rclcpp::sleep_for(10ms);
    rclcpp::spin_some(node);
    const auto time_new = msg_ulc_cfg.stamp();

    if (time_new.nanoseconds() != 0 && time_old.nanoseconds() != 0 && time_new.nanoseconds() != time_old.nanoseconds()) {
      double stamp_old = time_old.nanoseconds() / 1e9;
      double stamp_new = time_new.nanoseconds() / 1e9;
      double offset = 1.0 / cfg_freq;
      EXPECT_NEAR(stamp_old + offset, stamp_new, 0.02);
      count++;
    }
    time_old = time_new;
  }
  ASSERT_GE(count, 1u);

  // Change accel/jerk limits and make sure config CAN messages are sent immediately
  ulc_cmd.linear_accel = 2.0;
  checkImmediateCfg();
  ulc_cmd.linear_decel = 2.0;
  checkImmediateCfg();
  ulc_cmd.jerk_limit_throttle = 5.0;
  checkImmediateCfg();
  ulc_cmd.jerk_limit_brake = 5.0;
  checkImmediateCfg();
  ulc_cmd.lateral_accel = 2.0;
  checkImmediateCfg();
  ulc_cmd.angular_accel = 2.0;
  checkImmediateCfg();
}

TEST_F(UlcTestFixture, CmdRangeSaturation) {
  ASSERT_TRUE(waitForTopics(5s));
  ulc_cmd = dataspeed_ulc_msgs::msg::UlcCmd();

  /*** Underflow tests ******************************************************/
  ulc_cmd.enable_pedals = true;
  ulc_cmd.enable_steering = true;
  ulc_cmd.linear_velocity = (INT16_MIN * LIN_VEL_SCALE_FACTOR) - 1.0;
  ulc_cmd.pedals_mode = dataspeed_ulc_msgs::msg::UlcCmd::SPEED_MODE;
  ulc_cmd.coast_decel = 0;
  ulc_cmd.linear_accel = -1.0;
  ulc_cmd.linear_decel = -1.0;
  ulc_cmd.jerk_limit_throttle = -1.0;
  ulc_cmd.jerk_limit_brake = -1.0;
  ulc_cmd.lateral_accel = -1.0;
  ulc_cmd.angular_accel = -1.0;

  // Yaw rate steering
  ulc_cmd.yaw_command = (INT16_MIN * YAW_RATE_SCALE_FACTOR) - 0.5;
  ulc_cmd.steering_mode = dataspeed_ulc_msgs::msg::UlcCmd::YAW_RATE_MODE;
  msg_ulc_cmd.clear();
  msg_ulc_cfg.clear();
  pub_ulc_cmd->publish(ulc_cmd);
  ASSERT_TRUE(waitForMsg(150ms, msg_ulc_cmd));
  ASSERT_TRUE(waitForMsg(150ms, msg_ulc_cfg));
  EXPECT_EQ(INT16_MIN, msg_ulc_cmd.get().lon_command);
  EXPECT_EQ(INT16_MIN, msg_ulc_cmd.get().yaw_command);
  EXPECT_EQ(0, msg_ulc_cfg.get().linear_accel);
  EXPECT_EQ(0, msg_ulc_cfg.get().linear_decel);
  EXPECT_EQ(0, msg_ulc_cfg.get().jerk_limit_throttle);
  EXPECT_EQ(0, msg_ulc_cfg.get().jerk_limit_brake);
  EXPECT_EQ(0, msg_ulc_cfg.get().lateral_accel);
  EXPECT_EQ(0, msg_ulc_cfg.get().angular_accel);

  // Curvature steering
  ulc_cmd.yaw_command = (INT16_MIN * CURVATURE_SCALE_FACTOR) - 0.05;
  ulc_cmd.steering_mode = dataspeed_ulc_msgs::msg::UlcCmd::CURVATURE_MODE;
  msg_ulc_cmd.clear();
  msg_ulc_cfg.clear();
  pub_ulc_cmd->publish(ulc_cmd);
  ASSERT_TRUE(waitForMsg(150ms, msg_ulc_cmd));
  EXPECT_EQ(INT16_MIN, msg_ulc_cmd.get().yaw_command);
  /**************************************************************************/

  /*** Overflow tests *******************************************************/
  ulc_cmd.enable_pedals = true;
  ulc_cmd.enable_steering = true;
  ulc_cmd.linear_velocity = (INT16_MAX * LIN_VEL_SCALE_FACTOR) + 1.0;
  ulc_cmd.pedals_mode = dataspeed_ulc_msgs::msg::UlcCmd::SPEED_MODE;
  ulc_cmd.coast_decel = 0;
  ulc_cmd.linear_accel = 100.0;
  ulc_cmd.linear_decel = 100.0;
  ulc_cmd.jerk_limit_throttle = 100.0;
  ulc_cmd.jerk_limit_brake = 100.0;
  ulc_cmd.lateral_accel = 100.0;
  ulc_cmd.angular_accel = 100.0;

  // Yaw rate steering
  ulc_cmd.yaw_command = (INT16_MAX * YAW_RATE_SCALE_FACTOR) + 0.5;
  ulc_cmd.steering_mode = dataspeed_ulc_msgs::msg::UlcCmd::YAW_RATE_MODE;
  msg_ulc_cmd.clear();
  msg_ulc_cfg.clear();
  pub_ulc_cmd->publish(ulc_cmd);
  ASSERT_TRUE(waitForMsg(150ms, msg_ulc_cmd));
  ASSERT_TRUE(waitForMsg(150ms, msg_ulc_cfg));
  EXPECT_EQ(INT16_MAX, msg_ulc_cmd.get().lon_command);
  EXPECT_EQ(INT16_MAX, msg_ulc_cmd.get().yaw_command);
  EXPECT_EQ(UINT8_MAX, msg_ulc_cfg.get().linear_accel);
  EXPECT_EQ(UINT8_MAX, msg_ulc_cfg.get().linear_decel);
  EXPECT_EQ(UINT8_MAX, msg_ulc_cfg.get().jerk_limit_throttle);
  EXPECT_EQ(UINT8_MAX, msg_ulc_cfg.get().jerk_limit_brake);
  EXPECT_EQ(UINT8_MAX, msg_ulc_cfg.get().lateral_accel);
  EXPECT_EQ(UINT8_MAX, msg_ulc_cfg.get().angular_accel);

  // Curvature steering
  ulc_cmd.yaw_command = (INT16_MAX * CURVATURE_SCALE_FACTOR) + 0.05;
  ulc_cmd.steering_mode = dataspeed_ulc_msgs::msg::UlcCmd::CURVATURE_MODE;
  msg_ulc_cmd.clear();
  msg_ulc_cfg.clear();
  pub_ulc_cmd->publish(ulc_cmd);
  ASSERT_TRUE(waitForMsg(150ms, msg_ulc_cmd));
  EXPECT_EQ(INT16_MAX, msg_ulc_cmd.get().yaw_command);
  /**************************************************************************/

  /*** +Inf tests ***********************************************************/
  ulc_cmd.enable_pedals = true;
  ulc_cmd.enable_steering = true;
  ulc_cmd.linear_velocity = INFINITY;
  ulc_cmd.accel_cmd = INFINITY;
  ulc_cmd.linear_accel = INFINITY;
  ulc_cmd.linear_decel = INFINITY;
  ulc_cmd.jerk_limit_throttle = INFINITY;
  ulc_cmd.jerk_limit_brake = INFINITY;
  ulc_cmd.lateral_accel = INFINITY;
  ulc_cmd.angular_accel = INFINITY;

  // Yaw rate steering
  ulc_cmd.yaw_command = INFINITY;
  ulc_cmd.steering_mode = dataspeed_ulc_msgs::msg::UlcCmd::YAW_RATE_MODE;
  msg_ulc_cmd.clear();
  msg_ulc_cfg.clear();
  pub_ulc_cmd->publish(ulc_cmd);
  ASSERT_TRUE(waitForMsg(150ms, msg_ulc_cmd));
  ASSERT_TRUE(waitForMsg(150ms, msg_ulc_cfg));
  EXPECT_EQ(INT16_MAX, msg_ulc_cmd.get().lon_command);
  EXPECT_EQ(INT16_MAX, msg_ulc_cmd.get().yaw_command);
  EXPECT_EQ(UINT8_MAX, msg_ulc_cfg.get().linear_accel);
  EXPECT_EQ(UINT8_MAX, msg_ulc_cfg.get().linear_decel);
  EXPECT_EQ(UINT8_MAX, msg_ulc_cfg.get().jerk_limit_throttle);
  EXPECT_EQ(UINT8_MAX, msg_ulc_cfg.get().jerk_limit_brake);
  EXPECT_EQ(UINT8_MAX, msg_ulc_cfg.get().lateral_accel);
  EXPECT_EQ(UINT8_MAX, msg_ulc_cfg.get().angular_accel);

  // Curvature steering
  ulc_cmd.yaw_command = INFINITY;
  ulc_cmd.steering_mode = dataspeed_ulc_msgs::msg::UlcCmd::CURVATURE_MODE;
  msg_ulc_cmd.clear();
  msg_ulc_cfg.clear();
  pub_ulc_cmd->publish(ulc_cmd);
  ASSERT_TRUE(waitForMsg(150ms, msg_ulc_cmd));
  EXPECT_EQ(INT16_MAX, msg_ulc_cmd.get().yaw_command);
  /**************************************************************************/

  /*** -Inf tests ***********************************************************/
  ulc_cmd.enable_pedals = true;
  ulc_cmd.enable_steering = true;
  ulc_cmd.linear_velocity = -INFINITY;
  ulc_cmd.accel_cmd = -INFINITY;
  ulc_cmd.linear_accel = -INFINITY;
  ulc_cmd.linear_decel = -INFINITY;
  ulc_cmd.jerk_limit_throttle = -INFINITY;
  ulc_cmd.jerk_limit_brake = -INFINITY;
  ulc_cmd.lateral_accel = -INFINITY;
  ulc_cmd.angular_accel = -INFINITY;

  // Yaw rate steering
  ulc_cmd.yaw_command = -INFINITY;
  ulc_cmd.steering_mode = dataspeed_ulc_msgs::msg::UlcCmd::YAW_RATE_MODE;
  msg_ulc_cmd.clear();
  msg_ulc_cfg.clear();
  pub_ulc_cmd->publish(ulc_cmd);
  ASSERT_TRUE(waitForMsg(150ms, msg_ulc_cmd));
  ASSERT_TRUE(waitForMsg(150ms, msg_ulc_cfg));
  EXPECT_EQ(INT16_MIN, msg_ulc_cmd.get().lon_command);
  EXPECT_EQ(INT16_MIN, msg_ulc_cmd.get().yaw_command);
  EXPECT_EQ(0, msg_ulc_cfg.get().linear_accel);
  EXPECT_EQ(0, msg_ulc_cfg.get().linear_decel);
  EXPECT_EQ(0, msg_ulc_cfg.get().jerk_limit_throttle);
  EXPECT_EQ(0, msg_ulc_cfg.get().jerk_limit_brake);
  EXPECT_EQ(0, msg_ulc_cfg.get().lateral_accel);
  EXPECT_EQ(0, msg_ulc_cfg.get().angular_accel);

  // Curvature steering
  ulc_cmd.yaw_command = -INFINITY;
  ulc_cmd.steering_mode = dataspeed_ulc_msgs::msg::UlcCmd::CURVATURE_MODE;
  msg_ulc_cmd.clear();
  msg_ulc_cfg.clear();
  pub_ulc_cmd->publish(ulc_cmd);
  ASSERT_TRUE(waitForMsg(150ms, msg_ulc_cmd));
  EXPECT_EQ(INT16_MIN, msg_ulc_cmd.get().yaw_command);
  /**************************************************************************/
}

TEST_F(UlcTestFixture, OutOfBoundsInputs) {
  ASSERT_TRUE(waitForTopics(5s));
  msg_ulc_cfg.clear();

  // NaN in longitudinal command field
  ulc_cmd = dataspeed_ulc_msgs::msg::UlcCmd();
  ulc_cmd.linear_velocity = NAN;
  ulc_cmd.accel_cmd = NAN;
  msg_ulc_cmd.clear();
  pub_ulc_cmd->publish(ulc_cmd);
  EXPECT_FALSE(waitForMsg(150ms, msg_ulc_cmd));

  // NaN in yaw command field
  ulc_cmd = dataspeed_ulc_msgs::msg::UlcCmd();
  ulc_cmd.yaw_command = NAN;
  msg_ulc_cmd.clear();
  pub_ulc_cmd->publish(ulc_cmd);
  ASSERT_FALSE(waitForMsg(150ms, msg_ulc_cmd));

  // NaN in linear accel field
  ulc_cmd = dataspeed_ulc_msgs::msg::UlcCmd();
  ulc_cmd.linear_accel = NAN;
  msg_ulc_cmd.clear();
  pub_ulc_cmd->publish(ulc_cmd);
  EXPECT_FALSE(waitForMsg(150ms, msg_ulc_cmd));

  // NaN in linear decel field
  ulc_cmd = dataspeed_ulc_msgs::msg::UlcCmd();
  ulc_cmd.linear_decel = NAN;
  msg_ulc_cmd.clear();
  pub_ulc_cmd->publish(ulc_cmd);
  EXPECT_FALSE(waitForMsg(150ms, msg_ulc_cmd));

  // NaN in throttle jerk limit field
  ulc_cmd = dataspeed_ulc_msgs::msg::UlcCmd();
  ulc_cmd.jerk_limit_throttle = NAN;
  msg_ulc_cmd.clear();
  pub_ulc_cmd->publish(ulc_cmd);
  EXPECT_FALSE(waitForMsg(150ms, msg_ulc_cmd));

  // NaN in brake jerk limit field
  ulc_cmd = dataspeed_ulc_msgs::msg::UlcCmd();
  ulc_cmd.jerk_limit_brake = NAN;
  msg_ulc_cmd.clear();
  pub_ulc_cmd->publish(ulc_cmd);
  EXPECT_FALSE(waitForMsg(150ms, msg_ulc_cmd));

  // NaN in lateral accel field
  ulc_cmd = dataspeed_ulc_msgs::msg::UlcCmd();
  ulc_cmd.lateral_accel = NAN;
  msg_ulc_cmd.clear();
  pub_ulc_cmd->publish(ulc_cmd);
  EXPECT_FALSE(waitForMsg(150ms, msg_ulc_cmd));

  // NaN in angular accel field
  ulc_cmd = dataspeed_ulc_msgs::msg::UlcCmd();
  ulc_cmd.angular_accel = NAN;
  msg_ulc_cmd.clear();
  pub_ulc_cmd->publish(ulc_cmd);
  EXPECT_FALSE(waitForMsg(150ms, msg_ulc_cmd));

  // Invalid steering mode
  ulc_cmd = dataspeed_ulc_msgs::msg::UlcCmd();
  ulc_cmd.steering_mode = 3;
  msg_ulc_cmd.clear();
  pub_ulc_cmd->publish(ulc_cmd);
  EXPECT_FALSE(waitForMsg(150ms, msg_ulc_cmd));

  // Invalid pedals mode
  ulc_cmd = dataspeed_ulc_msgs::msg::UlcCmd();
  ulc_cmd.pedals_mode = 3;
  msg_ulc_cmd.clear();
  pub_ulc_cmd->publish(ulc_cmd);
  EXPECT_FALSE(waitForMsg(150ms, msg_ulc_cmd));

  // Make sure no config messages were sent during this process
  EXPECT_FALSE(waitForMsg(150ms, msg_ulc_cfg));
}

TEST_F(UlcTestFixture, ScaleFactors) {
  ASSERT_TRUE(waitForTopics(5s));
  ulc_cmd.linear_accel = 1.23;
  ulc_cmd.linear_decel = 3.45;
  ulc_cmd.jerk_limit_throttle = 7.89;
  ulc_cmd.jerk_limit_brake = 10.10;
  ulc_cmd.lateral_accel = 5.43;
  ulc_cmd.angular_accel = 3.21;

  // Speed mode
  ulc_cmd.linear_velocity = 22.3;
  ulc_cmd.accel_cmd = 0.0;
  ulc_cmd.pedals_mode = dataspeed_ulc_msgs::msg::UlcCmd::SPEED_MODE;
  msg_ulc_cmd.clear();
  msg_ulc_cfg.clear();
  pub_ulc_cmd->publish(ulc_cmd);
  ASSERT_TRUE(waitForMsg(150ms, msg_ulc_cmd));
  ASSERT_TRUE(waitForMsg(150ms, msg_ulc_cfg));
  EXPECT_EQ((int16_t)(ulc_cmd.linear_velocity / LIN_VEL_SCALE_FACTOR), msg_ulc_cmd.get().lon_command);
  EXPECT_EQ((int16_t)(ulc_cmd.linear_accel / LINEAR_ACCEL_SCALE_FACTOR), msg_ulc_cfg.get().linear_accel);
  EXPECT_EQ((int16_t)(ulc_cmd.linear_decel / LINEAR_DECEL_SCALE_FACTOR), msg_ulc_cfg.get().linear_decel);
  EXPECT_EQ((int16_t)(ulc_cmd.jerk_limit_throttle / JERK_LIMIT_THROTTLE_SCALE_FACTOR), msg_ulc_cfg.get().jerk_limit_throttle);
  EXPECT_EQ((int16_t)(ulc_cmd.jerk_limit_brake / JERK_LIMIT_BRAKE_SCALE_FACTOR), msg_ulc_cfg.get().jerk_limit_brake);
  EXPECT_EQ((int16_t)(ulc_cmd.lateral_accel / LATERAL_ACCEL_SCALE_FACTOR), msg_ulc_cfg.get().lateral_accel);
  EXPECT_EQ((int16_t)(ulc_cmd.angular_accel / ANGULAR_ACCEL_SCALE_FACTOR), msg_ulc_cfg.get().angular_accel);

  // Accel mode
  ulc_cmd.linear_velocity = 0.0;
  ulc_cmd.accel_cmd = 2.123;
  ulc_cmd.pedals_mode = dataspeed_ulc_msgs::msg::UlcCmd::ACCEL_MODE;
  msg_ulc_cmd.clear();
  pub_ulc_cmd->publish(ulc_cmd);
  ASSERT_TRUE(waitForMsg(150ms, msg_ulc_cmd));
  EXPECT_EQ((int16_t)(ulc_cmd.accel_cmd / ACCEL_CMD_SCALE_FACTOR), msg_ulc_cmd.get().lon_command);

  // Yaw rate steering
  ulc_cmd.yaw_command = 0.567;
  ulc_cmd.steering_mode = dataspeed_ulc_msgs::msg::UlcCmd::YAW_RATE_MODE;
  msg_ulc_cmd.clear();
  pub_ulc_cmd->publish(ulc_cmd);
  ASSERT_TRUE(waitForMsg(150ms, msg_ulc_cmd));
  EXPECT_EQ((int16_t)(ulc_cmd.yaw_command / YAW_RATE_SCALE_FACTOR), msg_ulc_cmd.get().yaw_command);

  // Curvature steering
  ulc_cmd.yaw_command = 0.0789;
  ulc_cmd.steering_mode = dataspeed_ulc_msgs::msg::UlcCmd::CURVATURE_MODE;
  msg_ulc_cmd.clear();
  pub_ulc_cmd->publish(ulc_cmd);
  ASSERT_TRUE(waitForMsg(150ms, msg_ulc_cmd));
  EXPECT_EQ((int16_t)(ulc_cmd.yaw_command / CURVATURE_SCALE_FACTOR), msg_ulc_cmd.get().yaw_command);
}

TEST_F(UlcTestFixture, DbwEnable) {
  ASSERT_TRUE(waitForTopics(5s));
  std_msgs::msg::Bool dbw_enabled_msg;
  ulc_cmd.enable_pedals = true;
  ulc_cmd.enable_steering = true;
  ulc_cmd.enable_shifting = true;
  ulc_cmd.shift_from_park = true;

  // Make sure CAN enable signals are false because dbw_enabled was not sent yet
  msg_ulc_cmd.clear();
  pub_ulc_cmd->publish(ulc_cmd);
  ASSERT_TRUE(waitForMsg(150ms, msg_ulc_cmd));
  EXPECT_FALSE(msg_ulc_cmd.get().enable_pedals);
  EXPECT_FALSE(msg_ulc_cmd.get().enable_steering);
  EXPECT_FALSE(msg_ulc_cmd.get().enable_shifting);
  EXPECT_FALSE(msg_ulc_cmd.get().shift_from_park);

  // Publish dbw_enabled as true
  dbw_enabled_msg.data = true;
  pub_enable->publish(dbw_enabled_msg);
  // std::this_thread::sleep_for(1ms);
  rclcpp::sleep_for(1ms);
  rclcpp::spin_some(node);

  // Send command again and make sure CAN enable signals are true
  msg_ulc_cmd.clear();
  pub_ulc_cmd->publish(ulc_cmd);
  ASSERT_TRUE(waitForMsg(150ms, msg_ulc_cmd));
  EXPECT_TRUE(msg_ulc_cmd.get().enable_pedals);
  EXPECT_TRUE(msg_ulc_cmd.get().enable_steering);
  EXPECT_TRUE(msg_ulc_cmd.get().enable_shifting);
  EXPECT_TRUE(msg_ulc_cmd.get().shift_from_park);

  // Publish dbw_enabled as false and make sure CAN enable signals are false
  dbw_enabled_msg.data = false;
  pub_enable->publish(dbw_enabled_msg);
  // std::this_thread::sleep_for(50ms);
  rclcpp::sleep_for(50ms);
  rclcpp::spin_some(node);
  msg_ulc_cmd.clear();
  pub_ulc_cmd->publish(ulc_cmd);
  ASSERT_TRUE(waitForMsg(150ms, msg_ulc_cmd));
  ASSERT_FALSE(msg_ulc_cmd.get().enable_pedals);
  ASSERT_FALSE(msg_ulc_cmd.get().enable_steering);
  ASSERT_FALSE(msg_ulc_cmd.get().enable_shifting);
  ASSERT_FALSE(msg_ulc_cmd.get().shift_from_park);
}

TEST_F(UlcTestFixture, TwistInputs) {
  ASSERT_TRUE(waitForTopics(5s));
  geometry_msgs::msg::Twist twist_cmd;
  twist_cmd.linear.x = 22.0;
  twist_cmd.angular.z = 0.2;
  // std::this_thread::sleep_for(1s);
  rclcpp::sleep_for(1s);
  rclcpp::spin_some(node);

  msg_ulc_cmd.clear();
  msg_ulc_cfg.clear();
  pub_twist->publish(twist_cmd);
  ASSERT_TRUE(waitForMsg(150ms, msg_ulc_cmd));
  EXPECT_FALSE(waitForMsg(500ms, msg_ulc_cfg));
  EXPECT_EQ((int16_t)(twist_cmd.linear.x / LIN_VEL_SCALE_FACTOR), msg_ulc_cmd.get().lon_command);
  EXPECT_EQ((int16_t)(twist_cmd.angular.z / YAW_RATE_SCALE_FACTOR), msg_ulc_cmd.get().yaw_command);
  EXPECT_EQ(0, msg_ulc_cmd.get().steering_mode);

  geometry_msgs::msg::TwistStamped twist_stamped_cmd;
  twist_stamped_cmd.twist = twist_cmd;
  msg_ulc_cmd.clear();
  msg_ulc_cfg.clear();
  pub_twist_stamped->publish(twist_stamped_cmd);
  ASSERT_TRUE(waitForMsg(150ms, msg_ulc_cmd));
  EXPECT_FALSE(waitForMsg(500ms, msg_ulc_cfg));
  EXPECT_EQ((int16_t)(twist_cmd.linear.x / LIN_VEL_SCALE_FACTOR), msg_ulc_cmd.get().lon_command);
  EXPECT_EQ((int16_t)(twist_cmd.angular.z / YAW_RATE_SCALE_FACTOR), msg_ulc_cmd.get().yaw_command);
  EXPECT_EQ(0, msg_ulc_cmd.get().steering_mode);
}

TEST_F(UlcTestFixture, ReportParsing) {
  ASSERT_TRUE(waitForTopics(5s));
  can_msgs::msg::Frame report_out;
  report_out.id = ID_ULC_REPORT;
  report_out.is_extended = false;
  report_out.dlc = sizeof(MsgUlcReport);
  MsgUlcReport* msg_report_ptr = reinterpret_cast<MsgUlcReport*>(report_out.data.data());
  memset(msg_report_ptr, 0x00, sizeof(MsgUlcReport));
  msg_report_ptr->timeout = false;
  msg_report_ptr->pedals_mode = 0;
  msg_report_ptr->coasting = 0;
  msg_report_ptr->steering_mode = 1;
  msg_report_ptr->steering_enabled = false;
  msg_report_ptr->pedals_enabled = true;
  msg_report_ptr->speed_ref = 22.2f / SPEED_REPORT_SCALE_FACTOR;
  msg_report_ptr->accel_ref = 1.1f / ACCEL_REPORT_SCALE_FACTOR;
  msg_report_ptr->speed_meas = 21.1f / SPEED_REPORT_SCALE_FACTOR;
  msg_report_ptr->accel_meas = 0.99f / ACCEL_REPORT_SCALE_FACTOR;
  msg_report_ptr->max_steering_vel = 16.0f / MAX_RATE_SCALE_FACTOR;
  msg_report_ptr->max_steering_angle = 55.0f / MAX_ANGLE_SCALE_FACTOR;
  msg_report_ptr->speed_preempted = true;
  msg_report_ptr->steering_preempted = false;
  msg_report_ptr->override = true;

  pub_can->publish(report_out);
  ASSERT_TRUE(waitForMsg(150ms, msg_ulc_report));
  ASSERT_FALSE(msg_ulc_report.get().timeout);
  ASSERT_EQ(0, msg_ulc_report.get().pedals_mode);
  ASSERT_EQ(0, msg_ulc_report.get().coasting);
  ASSERT_EQ(1, msg_ulc_report.get().steering_mode);
  ASSERT_FALSE(msg_ulc_report.get().steering_enabled);
  ASSERT_TRUE(msg_ulc_report.get().pedals_enabled);
  ASSERT_FLOAT_EQ(22.2f, msg_ulc_report.get().speed_ref);
  ASSERT_FLOAT_EQ(1.1f, msg_ulc_report.get().accel_ref);
  ASSERT_FLOAT_EQ(21.1f, msg_ulc_report.get().speed_meas);
  ASSERT_FLOAT_EQ(0.95f, msg_ulc_report.get().accel_meas);
  ASSERT_FLOAT_EQ(16.0f, msg_ulc_report.get().max_steering_vel);
  ASSERT_FLOAT_EQ(55.0f, msg_ulc_report.get().max_steering_angle);
  ASSERT_TRUE(msg_ulc_report.get().speed_preempted);
  ASSERT_FALSE(msg_ulc_report.get().steering_preempted);
}

int main(int argc, char** argv) {
  rclcpp::init(argc, argv);
  testing::InitGoogleTest(&argc, argv);
  int result = RUN_ALL_TESTS();
  rclcpp::shutdown();
  return result;
}
