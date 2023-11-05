/*********************************************************************
 * Software License Agreement (Proprietary and Confidential)
 *
 *  Copyright (c) 2017-2021, Dataspeed Inc.
 *  All rights reserved.
 *
 *  NOTICE:  All information contained herein is, and remains the
 *  property of Dataspeed Inc. The intellectual and technical concepts
 *  contained herein are proprietary to Dataspeed Inc. and may be
 *  covered by U.S. and Foreign Patents, patents in process, and are
 *  protected by trade secret or copyright law. Dissemination of this
 *  information or reproduction of this material is strictly forbidden
 *  unless prior written permission is obtained from Dataspeed Inc.
 *********************************************************************/
#pragma once
#include <chrono>
#include <rclcpp/rclcpp.hpp>

using std::chrono::nanoseconds;

template <typename MsgT>
class MsgRx {
public:
  MsgRx(const nanoseconds& thresh, rclcpp::Node::SharedPtr n) : dur_(thresh), node_(n) {
    clear();
  };
  MsgRx(const nanoseconds& thresh, const MsgT& msg) : dur_(thresh) {
    set(msg);
  };
  void set(const MsgT& msg) {
    msg_ = msg;
    stamp_ = node_->get_clock()->now();
  }
  void clear() {
    stamp_ = rclcpp::Time(0);
  }
  bool fresh(const rclcpp::Duration &delta) const {
    return age() < delta.nanoseconds();
  }
  bool fresh() const {
    return fresh(dur_);
  }
  int64_t age() const {
    return node_->get_clock()->now().nanoseconds() - stamp_.nanoseconds();
  }
  const MsgT& get() const {
    return msg_;
  }
  const rclcpp::Time& stamp() const {
    return stamp_;
  }

private:
  MsgT msg_;
  rclcpp::Time stamp_;
  rclcpp::Duration dur_;
  rclcpp::Node::SharedPtr node_;
};
