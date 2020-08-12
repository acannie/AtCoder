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
  std::string in = R"(3
10 40 70
20 50 80
30 60 90)"s;
  std::string out = R"(210)"s;

  std::ostringstream ost;
  std::istringstream ist(in + "\n");

  solve(ist, ost);
  std::string ostr = ost.str();

  EXPECT_EQ(ostr, out + "\n");
}

/*---------- case 2 ----------*/
TEST(Test1, case2)
{
  std::string in = R"(1
100 10 1)"s;
  std::string out = R"(100)"s;

  std::ostringstream ost;
  std::istringstream ist(in + "\n");

  solve(ist, ost);
  std::string ostr = ost.str();

  EXPECT_EQ(ostr, out + "\n");
}

/*---------- case 3 ----------*/
TEST(Test1, case3)
{
  std::string in = R"(7
6 7 8
8 8 3
2 5 2
7 8 6
4 6 8
2 3 4
7 5 1)"s;
  std::string out = R"(46)"s;

  std::ostringstream ost;
  std::istringstream ist(in + "\n");

  solve(ist, ost);
  std::string ostr = ost.str();

  EXPECT_EQ(ostr, out + "\n");
}

