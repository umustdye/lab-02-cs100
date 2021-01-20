#include "c-echo.h"
#include "gtest/gtest.h"

TEST(EchoTest, HelloWorld) {
    char *test_val[3];
    test_val[0] = "./c-echo";
    test_val[1] = "hello";
    test_val[2] = "world";
    EXPECT_EQ("hello world", echo(3, test_val));
}

TEST(EchoTest, EmptyString) {
    char *test_val[1];
    test_val[0] = "./c-echo";
    EXPECT_EQ("", echo(1, test_val));
}

TEST(EchoTest, EmptyAndFilledStrings) {
    char *test_val[5];
    test_val[0] = "./c-echo";
    test_val[1] = "Word 1";
    test_val[2] = "";
    test_val[3] = "Word 2";
    test_val[4] = "";
    EXPECT_EQ("Word 1 Word 2 ", echo(5, test_val));
}


TEST(EchoTest, LongRandomStrings) {
    char *test_val[4];
    test_val[0] = "./c-echo";
    test_val[1] = "1 2  3   4    5     6      7        8";
    test_val[2] = "";
    test_val[3] = "Afsdnl ikf4wl8qv4eQV$E 9omvtj4 e89m,pj";
    EXPECT_EQ("1 2  3   4    5     6      7        8 Afsdnl ikf4wl8qv4eQV$E 9omvtj4 e89m,pj", echo(4, test_val));
}

TEST(EchoTest, UserInformation) {
    char *test_val[6];
    test_val[0] = "./c-echo";
    test_val[1] = "Steve Stevelyson";
    test_val[2] = "1268 Haskell Lane";
    test_val[3] = "Santo Domingo,";
    test_val[4] = "California";
    test_val[5] = "92237";
    EXPECT_EQ("Steve Stevelyson 1268 Haskell Lane Santo Domingo, California 92237", echo(6, test_val)); 
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
