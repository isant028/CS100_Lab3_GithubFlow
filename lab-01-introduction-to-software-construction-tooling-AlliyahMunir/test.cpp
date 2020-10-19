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


//My Test1 uses long string, by displaying a long Disney Greeting
TEST(EchoTest, DisneyGreeting) {
    char* test_val[9]; test_val[0] = "./c-echo"; 
    test_val[1] = "Welcome"; test_val[2] = "Back";
    test_val[3] = "to"; test_val[4] = "Disney,"; 
    test_val[5] = "Where"; test_val[6] = "Dreams";
    test_val[7] = "Come";test_val[8] = "True!";

    EXPECT_EQ("Welcome Back to Disney, Where Dreams Come True!", echo(9,test_val));
}


//My Test2 uses int to display a special character(!) and a number countdown
TEST(EchoTest, CountDown) {
    char* test_val[6]; test_val[0] = "./c-echo"; 
    test_val[1] = "5!"; test_val[2] = "4!";
    test_val[3] = "3!"; test_val[4] = "2!"; test_val[5] = "1!";
    EXPECT_EQ("5! 4! 3! 2! 1!", echo(6,test_val));
}

//My Test3 uses long char to display the first 4 alphabet letters
//testing uppercase, lowercase, and special character feature
TEST(EchoTest, Alphabet) {
    char* test_val[9]; test_val[0] = "./c-echo"; 
    test_val[1] = "A,"; test_val[2] = "B,";
    test_val[3] = "C,"; test_val[4] = "D,";
    test_val[5] = "a,"; test_val[6] = "b,";
    test_val[7] = "c,"; test_val[8] = "d";
    EXPECT_EQ("A, B, C, D, a, b, c, d", echo(9,test_val));
}


int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
