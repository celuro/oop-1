#include <gtest/gtest.h>

int sum(int a, int b){
  return a + b;
}

TEST(SumTest, Positive){
  int a = 1;
  int b = 2;
  int result = sum(a, b);
  ASSERT_EQ(result, 3);
}

TEST(SumTest, Negative){
  int a = -5;
  int b = - 2;
  int result = sum(a, b);
  ASSERT_EQ(result, -3);
}

TEST(SumTest, Mixed){
  int a = 22;
  int b = -12;
  int result = sum(a, b);
  ASSERT_EQ(result, 34);
}

int main(int argc, char** argv){
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
