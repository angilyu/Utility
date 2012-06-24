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
TEST(FindSubstring, Normal) {
    char str1[] = "this is a string.";
    char sub1[] = "string";
    char* result = ::Find(str1, strlen(str1), sub1, strlen(sub1));
    ASSERT_EQ(str1 + 10, result);

    char str2[] = "thisis...";
    char sub2[] = "is";
    result = ::Find(str2, strlen(str2), sub2, strlen(sub2));
    ASSERT_EQ(str2 + 2, result);

    char str3[] = "LLLLD";
    char sub3[] = "LLLD";
    result = ::Find(str3, strlen(str3), sub3, strlen(sub3));
    ASSERT_EQ(str3 + 1, result);
}
TEST(FindSubstring, NOTFOUND) {
    char str1[] = "this is a string.ab";
    char sub1[] = "abd";
    char* result = ::Find(str1, strlen(str1), sub1, strlen(sub1));
    ASSERT_EQ(NULL, result);
}
TEST(FindSubstring, EMPTY) {
    char str1[] = "";
    char sub1[] = "abd";
    char* result = ::Find(str1, strlen(str1), sub1, strlen(sub1));
    ASSERT_EQ(NULL, result);

    char str2[] = "";
    char sub2[] = "";
    result = ::Find(str2, strlen(str2), sub2, strlen(sub2));
    ASSERT_EQ(NULL, result);
}
#include <TestRunner.cc>
