#include "solve.h"
#include "gtest/gtest.h"

using namespace std::literals::string_literals;

int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

/*---------- case 1 ----------*/
TEST(Test1, case1)
{
  std::string in = R"(1 2 1 1)"s;
  std::string out = R"(2)"s;

  std::ostringstream ost;
  std::istringstream ist(in + "\n");

  solve(ist, ost);
  std::string ostr = ost.str();

  EXPECT_EQ(ostr, out + "\n");
}

/*---------- case 2 ----------*/
TEST(Test1, case2)
{
  std::string in = R"(3 5 -4 -2)"s;
  std::string out = R"(-6)"s;

  std::ostringstream ost;
  std::istringstream ist(in + "\n");

  solve(ist, ost);
  std::string ostr = ost.str();

  EXPECT_EQ(ostr, out + "\n");
}

/*---------- case 3 ----------*/
TEST(Test1, case3)
{
  std::string in = R"(-1000000000 0 -1000000000 0)"s;
  std::string out = R"(1000000000000000000)"s;

  std::ostringstream ost;
  std::istringstream ist(in + "\n");

  solve(ist, ost);
  std::string ostr = ost.str();

  EXPECT_EQ(ostr, out + "\n");
}

