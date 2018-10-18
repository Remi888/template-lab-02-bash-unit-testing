#include "c-echo.h"

#include "gtest/gtest.h"

TEST(EchoTest, HelloWorld) {
    char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "hello"; test_val[2] = "world";
    EXPECT_EQ("hello world", echo(3,test_val));
}

TEST(EchoTest, EmptyString) {
    char* test_val[1]; test_val[0] = "./c-echo";
    EXPECT_EQ("", echo(1,test_val));
}


TEST(EchoTest, NetID) {
    char* test_val[2]; test_val[0] = "./c-echo"; test_val[1] = "rdef003";
    EXPECT_EQ("rdef003", echo(2,test_val));
}

TEST(EchoTest, Name ) {
    char* test_val[4]; test_val[0] = "./c-echo"; test_val[1] = "Remi"; test_val[2] = "de"; test_val[3] = "Ferrieres";
    EXPECT_EQ("Remi de Ferrieres", echo(4,test_val));
}

TEST(EchoTest, EmailAddress) {
    char* test_val[2]; test_val[0] = "./c-echo"; test_val[1] = "deferrieresremi@gmail.com";
    EXPECT_EQ("deferrieresremi@gmail.com", echo(2,test_val));
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
