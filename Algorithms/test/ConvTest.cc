#include <gtest/gtest.h>
#include <../Conv.h>

using namespace wenjing::util;

TEST(ToInt, Positive) {
    ASSERT_EQ(123, toInt("123"));
}
TEST(ToInt, PositiveWithSign) {
    ASSERT_EQ(123, toInt("+123"));
}
TEST(ToInt, Negative) {
    ASSERT_EQ(-12, toInt("-12"));
}
#include <TestRunner.cc>
