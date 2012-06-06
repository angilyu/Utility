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
TEST(ToDouble, Positive) {
    ASSERT_EQ(45, toDouble("45"));
    ASSERT_EQ(45, toDouble("45.0"));
    ASSERT_EQ(45, toDouble("45."));
    ASSERT_EQ(45.2, toDouble("45.2"));
    ASSERT_EQ(0.78, toDouble(".78"));
}
TEST(ToDouble, Negative) {
    ASSERT_EQ(-78, toDouble("-78"));
    ASSERT_EQ(-78, toDouble("-78."));
    ASSERT_EQ(-78, toDouble("-78.0"));
    ASSERT_EQ(-78.8, toDouble("-78.8"));
    ASSERT_EQ(-0.78, toDouble("-.78"));
}






#include <TestRunner.cc>
