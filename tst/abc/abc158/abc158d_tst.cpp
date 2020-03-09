#include "solve.h"
#include "gtest/gtest.h"

using namespace std::literals::string_literals;

int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

TEST(Test1, case1)
{
  std::string in = "a\n 4\n 2 1 p\n 1\n 2 2 c\n 1 "s;
  std::string out = "cpa"s;

  std::ostringstream ost;
  std::istringstream ist(in + "\n");

  solve(ist, ost);
  std::string ostr = ost.str();

  EXPECT_EQ(ostr, out + "\n");
}

TEST(Test1, case2)
{

  std::string in = "a 6 2 2 a 2 1 b 1 2 2 c 1 1 "s;
  std::string out = "aabc"s;

  std::ostringstream ost;
  std::istringstream ist(in + "\n");

  solve(ist, ost);
  std::string ostr = ost.str();

  EXPECT_EQ(ostr, out + "\n");
}

TEST(Test1, case3)
{

  std::string in = "y 1 2 1 x"s;
  std::string out = "xy"s;

  std::ostringstream ost;
  std::istringstream ist(in + "\n");

  solve(ist, ost);
  std::string ostr = ost.str();

  EXPECT_EQ(ostr, out + "\n");
}
