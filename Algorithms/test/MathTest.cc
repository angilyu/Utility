#include <gtest/gtest.h>
#include <../Math.h>

// -- A utility function to test the sameness of two floating number.
void AlmostTheSame(double f1, double f2) {
    ASSERT_NEAR(f1, f2, 0.001);
}

TEST(Sqrt, NegativeNumber) {
    AlmostTheSame(-1, wenjing::util::sqrt(-9));
}

TEST(Sqrt, Zero) {
    AlmostTheSame(0, wenjing::util::sqrt(0.0));
}

TEST(Sqrt, PositiveFragment) {
    AlmostTheSame(0.3, wenjing::util::sqrt(0.09));
    AlmostTheSame(0.5, wenjing::util::sqrt(0.25));
}

TEST(Sqrt, PositiveNumberGreaterThanOne) {
    AlmostTheSame(3, wenjing::util::sqrt(9));
    AlmostTheSame(2, wenjing::util::sqrt(4));
    AlmostTheSame(100, wenjing::util::sqrt(10000));
}

#include <TestRunner.cc>
