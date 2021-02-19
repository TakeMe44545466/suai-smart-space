#include "gtest/gtest.h"
#include "../fun.h"
#include <string>

namespace str_tests {

    TEST(Test1, Test) {
        std::string test = "a";
        char *resultingLine = fun(test.c_str());
        EXPECT_STREQ("a", resultingLine);
        free(resultingLine);
    }

    TEST(Test2, Test) {
        std::string test = "a a";
        char *resultingLine = fun(test.c_str());
        EXPECT_STREQ("a\na", resultingLine);
        free(resultingLine);
    }

    TEST(Test3, Test) {
        std::string test = "aaa aa";
        char *resultingLine = fun(test.c_str());
        EXPECT_STREQ("aaa\naa", resultingLine);
        free(resultingLine);
    }

    TEST(Test4, Test) {
        std::string test = "a     a";
        char *resultingLine = fun(test.c_str());
        EXPECT_STREQ("a\na", resultingLine);
        free(resultingLine);
    }

    TEST(Test5, Test) {
        std::string test = "a           a                 ";
        char *resultingLine = fun(test.c_str());
        EXPECT_STREQ("a\na", resultingLine);
        free(resultingLine);
    }

    TEST(Test6, Test) {
        std::string test = "     a    a";
        char *resultingLine = fun(test.c_str());
        EXPECT_STREQ("a\na", resultingLine);
        free(resultingLine);
    }

    TEST(Test7, Test) {
        std::string test = "   a    a   ";
        char *resultingLine = fun(test.c_str());
        EXPECT_STREQ("a\na", resultingLine);
        free(resultingLine);
    }

    TEST(Test8, Test) {
        std::string test = "aaaaaa     aaaa  aaaa aa a a a";
        char *resultingLine = fun(test.c_str());
        EXPECT_STREQ("aaaaaa\naaaa\naaaa\naa\na\na\na", resultingLine);
        free(resultingLine);
    }

    TEST(Test9, Test) {
        std::string test = "           a";
        char *resultingLine = fun(test.c_str());
        EXPECT_STREQ("a", resultingLine);
        free(resultingLine);
    }

    TEST(Test10, Test) {
        std::string test = "a              ";
        char *resultingLine = fun(test.c_str());
        EXPECT_STREQ("a", resultingLine);
        free(resultingLine);
    }

    TEST(Test11, Test) {
        std::string test = "            a              ";
        char *resultingLine = fun(test.c_str());
        EXPECT_STREQ("a", resultingLine);
        free(resultingLine);
    }

    TEST(Test12, Test) {
        std::string test = "0123456789,.?!&*a              ";
        char *resultingLine = fun(test.c_str());
        EXPECT_STREQ("a", resultingLine);
        free(resultingLine);
    }

    TEST(Test19, Test) {
        EXPECT_EQ(NULL, fun(NULL));
    }

    TEST(Test23, Test) {
        std::string test = "Привет мир!";
        char *resultingLine = fun(test.c_str());
        EXPECT_STREQ("Привет\nмир", resultingLine);
        free(resultingLine);
    }

    TEST(Test24, Test) {
        std::string test = "IODNJGMvo   cdcML. NMhnhqAok2!    rqOZF.";
        char *resultingLine = fun(test.c_str());
        EXPECT_STREQ("IODNJGMvo\ncdcML\nNMhnhqAok\nrqOZF", resultingLine);
        free(resultingLine);
    }

    TEST(Test25, Test) {
        std::string test = "ZkQIPRJMy     jtIMUNcOvjcZFf    ICIRrzmxjMwJROWI   lTFqfTIdshxBBEpAiEbmQPcyDhVCMMbRR    qoluEHAzuOCmtvKdcjTGtKiRFSuanbqCleAKWk    hHzuFWAiTcbeNtNFtjJbKvvINGPP O";
        char* resultingLine = fun(test.c_str());
        EXPECT_STREQ( "ZkQIPRJMy\njtIMUNcOvjcZFf\nICIRrzmxjMwJROWI\nlTFqfTIdshxBBEpAiEbmQPcyDhVCMMbRR\nqoluEHAzuOCmtvKdcjTGtKiRFSuanbqCleAKWk\nhHzuFWAiTcbeNtNFtjJbKvvINGPP\nO",
                resultingLine);
        free(resultingLine);
    }

}