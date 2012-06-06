#include <gtest/gtest.h>
#include <../Conv.h>

using namespace wenjing::util;

TEST(ToInt, Positive) {
    ASSERT_EQ(123, toInt("123"));
}
TEST(ToInt, PositiveWithSign) {

}
TEST(ToInt, Negative) {

}
#include <TestRunner.cc>
