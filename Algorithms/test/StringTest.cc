
#include <gtest/gtest.h>
#include <../String.h>
using namespace wenjing::util;

TEST(CompactString, Normal) {
    char str1[] = "I am   wenjing.  ";
    ASSERT_EQ(3, compactString(str1));
    ASSERT_STREQ("I am wenjing. ", str1);

    char str2[] = "This is a big deal.";
    ASSERT_EQ(0, compactString(str1));
    ASSERT_STREQ("This is a big deal.", str2);
}
TEST(CompactString, Empty) {
    char str1[] = "     ";
    ASSERT_EQ(4, compactString(str1));
    ASSERT_STREQ(" ", str1);
}
#include <TestRunner.cc>
