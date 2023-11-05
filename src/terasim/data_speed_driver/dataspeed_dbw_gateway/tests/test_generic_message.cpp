// File under test
#include "generic_message.hpp"

#include <gtest/gtest.h>

#include <dataspeed_dbw_gateway/msg/bounded_dynamic_arrays.hpp>
#include <dataspeed_dbw_gateway/msg/dynamic_arrays.hpp>
#include <dataspeed_dbw_gateway/msg/example_message.hpp>
#include <dataspeed_dbw_gateway/msg/example_message_ext.hpp>
#include <dataspeed_dbw_gateway/msg/static_arrays.hpp>
#include <dataspeed_dbw_gateway/msg/types.hpp>
#include <limits>

namespace test_msgs = dataspeed_dbw_gateway::msg;
using namespace ros2_generic_message;

/**
 * @brief Tests copying of types between messages.
 */
TEST(GenericMessage, type_copy) {
  test_msgs::Types t1;
  t1.t_float = 0.0f;
  t1.t_double = 0.0;
  t1.t_char = '\0';
  t1.t_bool = false;
  t1.t_octet = 0u;
  t1.t_u8 = 0u;
  t1.t_i8 = 0;
  t1.t_u16 = 0u;
  t1.t_i16 = 0;
  t1.t_u32 = 0u;
  t1.t_i32 = 0;
  t1.t_u64 = 0u;
  t1.t_i64 = 0;
  t1.t_string = "";
  t1.t_wstring = u"";  // utf-16
  t1.t_bounded_string = "";
  t1.t_bounded_wstring = u"";  // utf-16
  t1.t_message.name = "";
  t1.t_message.timestamp = 0u;

  const float test_float = 1.24f;
  const double test_double = 5.9213124;

  test_msgs::Types t2;
  t2.t_float = test_float;
  t2.t_double = test_double;
  t2.t_char = '%';
  t2.t_bool = true;
  t2.t_octet = std::numeric_limits<uint8_t>::max();
  t2.t_u8 = std::numeric_limits<uint8_t>::max();
  t2.t_i8 = std::numeric_limits<int8_t>::lowest();
  t2.t_u16 = std::numeric_limits<uint16_t>::max();
  t2.t_i16 = std::numeric_limits<int16_t>::lowest();
  t2.t_u32 = std::numeric_limits<uint32_t>::max();
  t2.t_i32 = std::numeric_limits<int32_t>::lowest();
  t2.t_u64 = std::numeric_limits<uint64_t>::max();
  t2.t_i64 = std::numeric_limits<int64_t>::lowest();
  t2.t_string = "foo";
  t2.t_wstring = u"bar";  // utf-16
  t1.t_bounded_string = "";
  t1.t_bounded_wstring = u"";  // utf-16
  t2.t_message.name = "test";
  t2.t_message.timestamp = 9999u;

  // verify zero before copy
  EXPECT_FLOAT_EQ(t1.t_float, 0.0f);
  EXPECT_DOUBLE_EQ(t1.t_double, 0.0);
  EXPECT_EQ(t1.t_char, '\0');
  EXPECT_EQ(t1.t_bool, false);
  EXPECT_EQ(t1.t_octet, 0u);
  EXPECT_EQ(t1.t_u8, 0u);
  EXPECT_EQ(t1.t_i8, 0);
  EXPECT_EQ(t1.t_u16, 0u);
  EXPECT_EQ(t1.t_i16, 0);
  EXPECT_EQ(t1.t_u32, 0u);
  EXPECT_EQ(t1.t_i32, 0);
  EXPECT_EQ(t1.t_u64, 0u);
  EXPECT_EQ(t1.t_i64, 0);
  EXPECT_TRUE(t1.t_string == "");
  EXPECT_TRUE(t1.t_wstring == u"");
  EXPECT_TRUE(t1.t_message.name == "");
  EXPECT_EQ(t1.t_message.timestamp, 0u);

  ASSERT_FALSE(t1 == t2);

  Message<test_msgs::Types> m1(&t1);
  Message<test_msgs::Types> m2(&t2);
  ASSERT_TRUE(m1.set(m2));

  // ensure they didn't somehow become the same pointer
  EXPECT_NE(&t1, &t2);
  EXPECT_NE(&t1.t_float, &t2.t_float);
  EXPECT_NE(&t1.t_double, &t2.t_double);
  EXPECT_NE(&t1.t_char, &t2.t_char);
  EXPECT_NE(&t1.t_bool, &t2.t_bool);
  EXPECT_NE(&t1.t_octet, &t2.t_octet);
  EXPECT_NE(&t1.t_u8, &t2.t_u8);
  EXPECT_NE(&t1.t_i8, &t2.t_i8);
  EXPECT_NE(&t1.t_u16, &t2.t_u16);
  EXPECT_NE(&t1.t_i16, &t2.t_i16);
  EXPECT_NE(&t1.t_u32, &t2.t_u32);
  EXPECT_NE(&t1.t_i32, &t2.t_i32);
  EXPECT_NE(&t1.t_u64, &t2.t_u64);
  EXPECT_NE(&t1.t_i64, &t2.t_i64);
  EXPECT_NE(&t1.t_string, &t2.t_string);
  EXPECT_NE(&t1.t_wstring, &t2.t_wstring);
  EXPECT_NE(&t1.t_message, &t2.t_message);

  // verify set after copy
  EXPECT_FLOAT_EQ(t1.t_float, test_float);
  EXPECT_DOUBLE_EQ(t1.t_double, test_double);
  EXPECT_EQ(t1.t_char, '%');
  EXPECT_EQ(t1.t_bool, true);
  EXPECT_EQ(t1.t_octet, std::numeric_limits<uint8_t>::max());
  EXPECT_EQ(t1.t_u8, std::numeric_limits<uint8_t>::max());
  EXPECT_EQ(t1.t_i8, std::numeric_limits<int8_t>::lowest());
  EXPECT_EQ(t1.t_u16, std::numeric_limits<uint16_t>::max());
  EXPECT_EQ(t1.t_i16, std::numeric_limits<int16_t>::lowest());
  EXPECT_EQ(t1.t_u32, std::numeric_limits<uint32_t>::max());
  EXPECT_EQ(t1.t_i32, std::numeric_limits<int32_t>::lowest());
  EXPECT_EQ(t1.t_u64, std::numeric_limits<uint64_t>::max());
  EXPECT_EQ(t1.t_i64, std::numeric_limits<int64_t>::lowest());
  EXPECT_TRUE(t1.t_string == "foo");
  EXPECT_TRUE(t1.t_wstring == u"bar");
  EXPECT_TRUE(t1.t_message.name == "test");
  EXPECT_EQ(t1.t_message.timestamp, 9999u);

  ASSERT_TRUE(t1 == t2);
}

// metaprogramming
// this is used to prevent type deduction issues
template <typename T>
struct identity {
  typedef T type;
};

template <typename T, size_t Size>
static bool array_eq(const std::array<T, Size> a, typename identity<T>::type value) {
  for (size_t i = 0; i < Size; ++i) {
    if (a[i] != value) {
      return false;
    }
  }
  return true;
}

static test_msgs::ExampleMessage make_message(const std::string name, const uint64_t ts) {
  test_msgs::ExampleMessage msg;
  msg.name = name;
  msg.timestamp = ts;
  return msg;
}

/**
 * @brief Tests copying arrays of types between messages.
 */
TEST(GenericMessage, static_array_copy) {
  test_msgs::StaticArrays t1;
  t1.t_float.fill(0.0f);
  t1.t_double.fill(0.0);
  t1.t_char.fill('\0');
  t1.t_bool.fill(false);
  t1.t_octet.fill(0u);
  t1.t_u8.fill(0u);
  t1.t_i8.fill(0);
  t1.t_u16.fill(0u);
  t1.t_i16.fill(0);
  t1.t_u32.fill(0u);
  t1.t_i32.fill(0);
  t1.t_u64.fill(0u);
  t1.t_i64.fill(0);
  t1.t_string.fill("");
  t1.t_wstring.fill(u"");
  t1.t_message.fill(make_message("", 0u));

  test_msgs::StaticArrays t2;
  t2.t_float = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f};
  t2.t_double = {0.0, 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0};
  t2.t_char = {'1', '2', '3', '4', '5', '6', '7', '8'};
  t2.t_bool = {true, false, false, true, true, false, false, true};
  t2.t_octet = {1u, 2u, 3u, 4u, 5u, 6u, 7u, 8u};
  t2.t_u8 = {10u, 20u, 30u, 40u, 50u, 60u, 70u, 80u};
  t2.t_i8 = {-10, -20, -30, -40, -50, -60, -70, -80};
  t2.t_u16 = {100u, 200u, 300u, 400u, 500u, 600u, 700u, 800u};
  t2.t_i16 = {-100, -200, -300, -400, -500, -600, -700, -800};
  t2.t_u32 = {1000u, 2000u, 3000u, 4000u, 5000u, 6000u, 7000u, 8000u};
  t2.t_i32 = {-1000, -2000, -3000, -4000, -5000, -6000, -7000, -8000};
  t2.t_u64 = {10000u, 20000u, 30000u, 40000u, 50000u, 60000u, 70000u, 80000u};
  t2.t_i64 = {-10000, -20000, -30000, -40000, -50000, -60000, -70000, -80000};
  t2.t_string = {"one", "two", "three", "four", "five", "six", "seven", "eight"};
  t2.t_wstring = {u"ichi", u"ni", u"san", u"yon", u"go", u"roku", u"nana", u"hachi"};  // romaji
  t2.t_message = {make_message("m1", 1u), make_message("m2", 2u), make_message("m3", 3u), make_message("m4", 4u),
                  make_message("m5", 5u), make_message("m6", 6u), make_message("m7", 7u), make_message("m8", 8u)};

  EXPECT_TRUE(array_eq(t1.t_float, 0.0f));
  EXPECT_TRUE(array_eq(t1.t_double, 0.0));
  EXPECT_TRUE(array_eq(t1.t_char, '\0'));
  EXPECT_TRUE(array_eq(t1.t_bool, false));
  EXPECT_TRUE(array_eq(t1.t_octet, 0u));
  EXPECT_TRUE(array_eq(t1.t_u8, 0u));
  EXPECT_TRUE(array_eq(t1.t_i8, 0));
  EXPECT_TRUE(array_eq(t1.t_u16, 0u));
  EXPECT_TRUE(array_eq(t1.t_i16, 0));
  EXPECT_TRUE(array_eq(t1.t_u32, 0u));
  EXPECT_TRUE(array_eq(t1.t_i32, 0));
  EXPECT_TRUE(array_eq(t1.t_u64, 0u));
  EXPECT_TRUE(array_eq(t1.t_i64, 0));
  EXPECT_TRUE(array_eq(t1.t_string, ""));
  EXPECT_TRUE(array_eq(t1.t_wstring, u""));
  EXPECT_TRUE(array_eq(t1.t_message, make_message("",0u)));

  Message<test_msgs::StaticArrays> m1(&t1);
  Message<test_msgs::StaticArrays> m2(&t2);
  ASSERT_TRUE(m1.set(m2));

  // ensure they didn't somehow become the same pointer
  EXPECT_NE(&t1, &t2);
  EXPECT_NE(&t1.t_float, &t2.t_float);
  EXPECT_NE(&t1.t_double, &t2.t_double);
  EXPECT_NE(&t1.t_char, &t2.t_char);
  EXPECT_NE(&t1.t_bool, &t2.t_bool);
  EXPECT_NE(&t1.t_octet, &t2.t_octet);
  EXPECT_NE(&t1.t_u8, &t2.t_u8);
  EXPECT_NE(&t1.t_i8, &t2.t_i8);
  EXPECT_NE(&t1.t_u16, &t2.t_u16);
  EXPECT_NE(&t1.t_i16, &t2.t_i16);
  EXPECT_NE(&t1.t_u32, &t2.t_u32);
  EXPECT_NE(&t1.t_i32, &t2.t_i32);
  EXPECT_NE(&t1.t_u64, &t2.t_u64);
  EXPECT_NE(&t1.t_i64, &t2.t_i64);
  EXPECT_NE(&t1.t_string, &t2.t_string);
  EXPECT_NE(&t1.t_string[0], &t2.t_string[0]);
  EXPECT_NE(&t1.t_wstring, &t2.t_wstring);
  EXPECT_NE(&t1.t_wstring[0], &t2.t_wstring[0]);
  EXPECT_NE(&t1.t_message, &t2.t_message);
  EXPECT_NE(&t1.t_message[0], &t2.t_message[0]);

  EXPECT_TRUE(t1.t_float == t2.t_float);
  EXPECT_TRUE(t1.t_double == t2.t_double);
  EXPECT_TRUE(t1.t_char == t2.t_char);
  EXPECT_TRUE(t1.t_bool == t2.t_bool);
  EXPECT_TRUE(t1.t_octet == t2.t_octet);
  EXPECT_TRUE(t1.t_u8 == t2.t_u8);
  EXPECT_TRUE(t1.t_i8 == t2.t_i8);
  EXPECT_TRUE(t1.t_u16 == t2.t_u16);
  EXPECT_TRUE(t1.t_i16 == t2.t_i16);
  EXPECT_TRUE(t1.t_u32 == t2.t_u32);
  EXPECT_TRUE(t1.t_i32 == t2.t_i32);
  EXPECT_TRUE(t1.t_u64 == t2.t_u64);
  EXPECT_TRUE(t1.t_i64 == t2.t_i64);
  EXPECT_TRUE(t1.t_string == t2.t_string);
  EXPECT_TRUE(t1.t_wstring == t2.t_wstring);
  EXPECT_TRUE(t1.t_message == t2.t_message);

  ASSERT_TRUE(t1 == t2);
}

/**
 * @brief Tests copying dynamic arrays of types between messages.
 */
TEST(GenericMessage, dynamic_array_copy) {
  test_msgs::DynamicArrays t1;
  t1.t_float.clear();
  t1.t_double.clear();
  t1.t_char.clear();
  t1.t_bool.clear();
  t1.t_octet.clear();
  t1.t_u8.clear();
  t1.t_i8.clear();
  t1.t_u16.clear();
  t1.t_i16.clear();
  t1.t_u32.clear();
  t1.t_i32.clear();
  t1.t_u64.clear();
  t1.t_i64.clear();
  t1.t_string.clear();
  t1.t_wstring.clear();
  t1.t_message.clear();

  test_msgs::DynamicArrays t2;
  t2.t_float = {1.0f};
  t2.t_double = {0.0, 1.0};
  t2.t_char = {'1', '2', '3'};
  t2.t_bool = {true, false, true, false, true};
  t2.t_octet = {1u, 2u, 3u, 4u, 5u};
  t2.t_u8 = {10u, 20u, 30u, 40u, 50u, 60u};
  t2.t_i8 = {-10, -20, -30, -40, -50, -60, -70};
  t2.t_u16 = {100u};
  t2.t_i16 = {-100, -200};
  t2.t_u32 = {1000u, 2000u, 3000u};
  t2.t_i32 = {-1000, -2000, -3000, -4000};
  t2.t_u64 = {10000u, 20000u, 30000u, 40000u, 50000u};
  t2.t_i64 = {-10000, -20000, -30000, -40000, -50000, -60000};
  t2.t_string = {"one", "two", "three", "four", "five", "six", "seven"};
  t2.t_wstring = {u"ichi", u"ni", u"san", u"yon", u"go", u"roku", u"nana", u"hachi"};  // romaji
  t2.t_message = {make_message("m1", 1u), make_message("m2", 2u)};

  EXPECT_EQ(t1.t_float.size(), 0u);
  EXPECT_EQ(t1.t_double.size(), 0u);
  EXPECT_EQ(t1.t_char.size(), 0u);
  EXPECT_EQ(t1.t_bool.size(), 0u);
  EXPECT_EQ(t1.t_octet.size(), 0u);
  EXPECT_EQ(t1.t_u8.size(), 0u);
  EXPECT_EQ(t1.t_i8.size(), 0u);
  EXPECT_EQ(t1.t_u16.size(), 0u);
  EXPECT_EQ(t1.t_i16.size(), 0u);
  EXPECT_EQ(t1.t_u32.size(), 0u);
  EXPECT_EQ(t1.t_i32.size(), 0u);
  EXPECT_EQ(t1.t_u64.size(), 0u);
  EXPECT_EQ(t1.t_i64.size(), 0u);
  EXPECT_EQ(t1.t_string.size(), 0u);
  EXPECT_EQ(t1.t_wstring.size(), 0u);
  EXPECT_EQ(t1.t_message.size(), 0u);

  EXPECT_NE(t2.t_float.size(), 0u);
  EXPECT_NE(t2.t_double.size(), 0u);
  EXPECT_NE(t2.t_char.size(), 0u);
  EXPECT_NE(t2.t_bool.size(), 0u);
  EXPECT_NE(t2.t_octet.size(), 0u);
  EXPECT_NE(t2.t_u8.size(), 0u);
  EXPECT_NE(t2.t_i8.size(), 0u);
  EXPECT_NE(t2.t_u16.size(), 0u);
  EXPECT_NE(t2.t_i16.size(), 0u);
  EXPECT_NE(t2.t_u32.size(), 0u);
  EXPECT_NE(t2.t_i32.size(), 0u);
  EXPECT_NE(t2.t_u64.size(), 0u);
  EXPECT_NE(t2.t_i64.size(), 0u);
  EXPECT_NE(t2.t_string.size(), 0u);
  EXPECT_NE(t2.t_wstring.size(), 0u);
  EXPECT_NE(t2.t_message.size(), 0u);

  Message<test_msgs::DynamicArrays> m1(&t1);
  Message<test_msgs::DynamicArrays> m2(&t2);
  ASSERT_TRUE(m1.set(m2));

  // ensure they didn't somehow become the same pointer
  EXPECT_NE(&t1, &t2);
  EXPECT_NE(t1.t_float.data(), t2.t_float.data());
  EXPECT_NE(t1.t_double.data(), t2.t_double.data());
  EXPECT_NE(t1.t_char.data(), t2.t_char.data());
  // vector bool specialization does not provide a data method
  EXPECT_NE(t1.t_octet.data(), t2.t_octet.data());
  EXPECT_NE(t1.t_u8.data(), t2.t_u8.data());
  EXPECT_NE(t1.t_i8.data(), t2.t_i8.data());
  EXPECT_NE(t1.t_u16.data(), t2.t_u16.data());
  EXPECT_NE(t1.t_i16.data(), t2.t_i16.data());
  EXPECT_NE(t1.t_u32.data(), t2.t_u32.data());
  EXPECT_NE(t1.t_i32.data(), t2.t_i32.data());
  EXPECT_NE(t1.t_u64.data(), t2.t_u64.data());
  EXPECT_NE(t1.t_i64.data(), t2.t_i64.data());
  EXPECT_NE(t1.t_string.data(), t2.t_string.data());
  EXPECT_NE(t1.t_wstring.data(), t2.t_wstring.data());
  EXPECT_NE(t1.t_message.data(), t2.t_message.data());
  // check message pointers for sanity
  ASSERT_EQ(t1.t_message.size(), t2.t_message.size());  // should be 2
  EXPECT_NE(&t1.t_message[0], &t2.t_message[0]);
  EXPECT_NE(&t1.t_message[1], &t2.t_message[1]);
  EXPECT_NE(&t1.t_message[0], &t1.t_message[1]);

  EXPECT_TRUE(t1.t_float == t2.t_float);
  EXPECT_TRUE(t1.t_double == t2.t_double);
  EXPECT_TRUE(t1.t_char == t2.t_char);
  EXPECT_TRUE(t1.t_bool == t2.t_bool);
  EXPECT_TRUE(t1.t_octet == t2.t_octet);
  EXPECT_TRUE(t1.t_u8 == t2.t_u8);
  EXPECT_TRUE(t1.t_i8 == t2.t_i8);
  EXPECT_TRUE(t1.t_u16 == t2.t_u16);
  EXPECT_TRUE(t1.t_i16 == t2.t_i16);
  EXPECT_TRUE(t1.t_u32 == t2.t_u32);
  EXPECT_TRUE(t1.t_i32 == t2.t_i32);
  EXPECT_TRUE(t1.t_u64 == t2.t_u64);
  EXPECT_TRUE(t1.t_i64 == t2.t_i64);
  EXPECT_TRUE(t1.t_string == t2.t_string);
  EXPECT_TRUE(t1.t_wstring == t2.t_wstring);
  EXPECT_TRUE(t1.t_message == t2.t_message);

  ASSERT_TRUE(t1 == t2);
}


/**
 * @brief Tests copying dynamic arrays of types between messages.
 */
TEST(GenericMessage, bounded_dynamic_array_copy) {
  test_msgs::BoundedDynamicArrays t1;
  t1.t_float.clear();
  t1.t_double.clear();
  t1.t_char.clear();
  t1.t_bool.clear();
  t1.t_octet.clear();
  t1.t_u8.clear();
  t1.t_i8.clear();
  t1.t_u16.clear();
  t1.t_i16.clear();
  t1.t_u32.clear();
  t1.t_i32.clear();
  t1.t_u64.clear();
  t1.t_i64.clear();
  t1.t_string.clear();
  t1.t_wstring.clear();
  t1.t_message.clear();

  test_msgs::BoundedDynamicArrays t2;
  t2.t_float = {1.0f};
  t2.t_double = {0.0, 1.0};
  t2.t_char = {'1', '2', '3'};
  t2.t_bool = {true, false, true, false, true};
  t2.t_octet = {1u, 2u, 3u, 4u, 5u};
  t2.t_u8 = {10u, 20u, 30u, 40u, 50u, 60u};
  t2.t_i8 = {-10, -20, -30, -40, -50, -60, -70};
  t2.t_u16 = {100u};
  t2.t_i16 = {-100, -200};
  t2.t_u32 = {1000u, 2000u, 3000u};
  t2.t_i32 = {-1000, -2000, -3000, -4000};
  t2.t_u64 = {10000u, 20000u, 30000u, 40000u, 50000u};
  t2.t_i64 = {-10000, -20000, -30000, -40000, -50000, -60000};
  t2.t_string = {"one", "two", "three", "four", "five", "six", "seven"};
  t2.t_wstring = {u"ichi", u"ni", u"san", u"yon", u"go", u"roku", u"nana", u"hachi"};  // romaji
  t2.t_message = {make_message("m1", 1u), make_message("m2", 2u)};

  EXPECT_EQ(t1.t_float.size(), 0u);
  EXPECT_EQ(t1.t_double.size(), 0u);
  EXPECT_EQ(t1.t_char.size(), 0u);
  EXPECT_EQ(t1.t_bool.size(), 0u);
  EXPECT_EQ(t1.t_octet.size(), 0u);
  EXPECT_EQ(t1.t_u8.size(), 0u);
  EXPECT_EQ(t1.t_i8.size(), 0u);
  EXPECT_EQ(t1.t_u16.size(), 0u);
  EXPECT_EQ(t1.t_i16.size(), 0u);
  EXPECT_EQ(t1.t_u32.size(), 0u);
  EXPECT_EQ(t1.t_i32.size(), 0u);
  EXPECT_EQ(t1.t_u64.size(), 0u);
  EXPECT_EQ(t1.t_i64.size(), 0u);
  EXPECT_EQ(t1.t_string.size(), 0u);
  EXPECT_EQ(t1.t_wstring.size(), 0u);
  EXPECT_EQ(t1.t_message.size(), 0u);

  EXPECT_NE(t2.t_float.size(), 0u);
  EXPECT_NE(t2.t_double.size(), 0u);
  EXPECT_NE(t2.t_char.size(), 0u);
  EXPECT_NE(t2.t_bool.size(), 0u);
  EXPECT_NE(t2.t_octet.size(), 0u);
  EXPECT_NE(t2.t_u8.size(), 0u);
  EXPECT_NE(t2.t_i8.size(), 0u);
  EXPECT_NE(t2.t_u16.size(), 0u);
  EXPECT_NE(t2.t_i16.size(), 0u);
  EXPECT_NE(t2.t_u32.size(), 0u);
  EXPECT_NE(t2.t_i32.size(), 0u);
  EXPECT_NE(t2.t_u64.size(), 0u);
  EXPECT_NE(t2.t_i64.size(), 0u);
  EXPECT_NE(t2.t_string.size(), 0u);
  EXPECT_NE(t2.t_wstring.size(), 0u);
  EXPECT_NE(t2.t_message.size(), 0u);

  Message<test_msgs::BoundedDynamicArrays> m1(&t1);
  Message<test_msgs::BoundedDynamicArrays> m2(&t2);
  ASSERT_TRUE(m1.set(m2));

  // ensure they didn't somehow become the same pointer
  EXPECT_NE(&t1, &t2);
  
  EXPECT_NE(&t1.t_float[0], &t2.t_float[0]);
  EXPECT_NE(&t1.t_double[0], &t2.t_double[0]);
  EXPECT_NE(&t1.t_char[0], &t2.t_char[0]);
  // vector bool specialization does not provide a data method
  EXPECT_NE(&t1.t_octet[0], &t2.t_octet[0]);
  EXPECT_NE(&t1.t_u8[0], &t2.t_u8[0]);
  EXPECT_NE(&t1.t_i8[0], &t2.t_i8[0]);
  EXPECT_NE(&t1.t_u16[0], &t2.t_u16[0]);
  EXPECT_NE(&t1.t_i16[0], &t2.t_i16[0]);
  EXPECT_NE(&t1.t_u32[0], &t2.t_u32[0]);
  EXPECT_NE(&t1.t_i32[0], &t2.t_i32[0]);
  EXPECT_NE(&t1.t_u64[0], &t2.t_u64[0]);
  EXPECT_NE(&t1.t_i64[0], &t2.t_i64[0]);
  EXPECT_NE(&t1.t_string[0], &t2.t_string[0]);
  EXPECT_NE(&t1.t_wstring[0], &t2.t_wstring[0]);
  EXPECT_NE(&t1.t_message[0], &t2.t_message[0]);
  // check message pointers for sanity
  ASSERT_EQ(t1.t_message.size(), t2.t_message.size());  // should be 2
  EXPECT_NE(&t1.t_message[0], &t2.t_message[0]);
  EXPECT_NE(&t1.t_message[1], &t2.t_message[1]);
  EXPECT_NE(&t1.t_message[0], &t1.t_message[1]);

  EXPECT_TRUE(t1.t_float == t2.t_float);
  EXPECT_TRUE(t1.t_double == t2.t_double);
  EXPECT_TRUE(t1.t_char == t2.t_char);
  EXPECT_TRUE(t1.t_bool == t2.t_bool);
  EXPECT_TRUE(t1.t_octet == t2.t_octet);
  EXPECT_TRUE(t1.t_u8 == t2.t_u8);
  EXPECT_TRUE(t1.t_i8 == t2.t_i8);
  EXPECT_TRUE(t1.t_u16 == t2.t_u16);
  EXPECT_TRUE(t1.t_i16 == t2.t_i16);
  EXPECT_TRUE(t1.t_u32 == t2.t_u32);
  EXPECT_TRUE(t1.t_i32 == t2.t_i32);
  EXPECT_TRUE(t1.t_u64 == t2.t_u64);
  EXPECT_TRUE(t1.t_i64 == t2.t_i64);
  EXPECT_TRUE(t1.t_string == t2.t_string);
  EXPECT_TRUE(t1.t_wstring == t2.t_wstring);
  EXPECT_TRUE(t1.t_message == t2.t_message);

  ASSERT_TRUE(t1 == t2);
}

/**
 * @brief Tests copying between message types, from an empty smaller message to a larger filled message.
 */
TEST(GenericMessage, message_copy) {
  test_msgs::ExampleMessageExt t1;
  t1.name = "foobar";
  t1.timestamp = 9999u;
  t1.extra_string_field = "test";
  t1.extra_int_field = 1111u;

  test_msgs::ExampleMessage t2;
  t2.name = "";
  t2.timestamp = 0;

  EXPECT_TRUE(t1.name == "foobar");
  EXPECT_EQ(t1.timestamp, 9999u);
  EXPECT_TRUE(t1.extra_string_field == "test");
  EXPECT_EQ(t1.extra_int_field, 1111u);

  Message<test_msgs::ExampleMessageExt> m1(&t1);
  Message<test_msgs::ExampleMessage> m2(&t2);
  ASSERT_TRUE(m1.set(m2));

  EXPECT_TRUE(t1.name == "");
  EXPECT_EQ(t1.timestamp, 9999u);  // different types, no copy
  EXPECT_TRUE(t1.extra_string_field == "test");
  EXPECT_EQ(t1.extra_int_field, 1111u);
}

/**
 * @brief Tests copying between message types, from a filled larger message to an empty smaller message.
 */
TEST(GenericMessage, message2_copy) {
  test_msgs::ExampleMessage t1;
  t1.name = "";
  t1.timestamp = 0u;

  test_msgs::ExampleMessageExt t2;
  t2.name = "foobar";
  t2.timestamp = 9999u;
  t2.extra_string_field = "test";
  t2.extra_int_field = 1111u;

  EXPECT_TRUE(t1.name == "");
  EXPECT_EQ(t1.timestamp, 0u);

  Message<test_msgs::ExampleMessage> m1(&t1);
  Message<test_msgs::ExampleMessageExt> m2(&t2);
  ASSERT_TRUE(m1.set(m2));

  EXPECT_TRUE(t1.name == "foobar");
  EXPECT_EQ(t1.timestamp, 0u);  // different types, no copy
}

TEST(GenericMessage, msg_size) {
  test_msgs::ExampleMessage t1;
  Message<test_msgs::ExampleMessage> m1(&t1);

  EXPECT_EQ(m1.size(), 2u);
}

TEST(GenericMessage, msg_ns) {
  test_msgs::ExampleMessage t1;
  Message<test_msgs::ExampleMessage> m1(&t1);

  EXPECT_TRUE(m1.ns() == "dataspeed_dbw_gateway::msg");
}

TEST(GenericMessage, msg_name) {
  test_msgs::ExampleMessage t1;
  Message<test_msgs::ExampleMessage> m1(&t1);

  EXPECT_TRUE(m1.name() == "ExampleMessage");
}

TEST(GenericMessage, field_name) {
  test_msgs::ExampleMessage t1;
  Message<test_msgs::ExampleMessage> m1(&t1);

  EXPECT_TRUE(m1[0].name() == "name");
  EXPECT_TRUE(m1[1].name() == "timestamp");
}

TEST(GenericMessage, field_type) {
  test_msgs::ExampleMessage t1;
  Message<test_msgs::ExampleMessage> m1(&t1);

  EXPECT_TRUE(m1[0].type_id() == ROS_TYPE_STRING);
  EXPECT_TRUE(m1[1].type_id() == ROS_TYPE_UINT64);
}

//TODO test exceptions