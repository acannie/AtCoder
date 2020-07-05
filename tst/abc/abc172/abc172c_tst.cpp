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
  std::string in = R"(3 4 240
60 90 120
80 150 80 150)"s;
  std::string out = R"(3)"s;

  std::ostringstream ost;
  std::istringstream ist(in + "\n");

  solve(ist, ost);
  std::string ostr = ost.str();

  EXPECT_EQ(ostr, out + "\n");
}

/*---------- case 2 ----------*/
TEST(Test1, case2)
{
  std::string in = R"(3 4 730
60 90 120
80 150 80 150)"s;
  std::string out = R"(7)"s;

  std::ostringstream ost;
  std::istringstream ist(in + "\n");

  solve(ist, ost);
  std::string ostr = ost.str();

  EXPECT_EQ(ostr, out + "\n");
}

/*---------- case 3 ----------*/
TEST(Test1, case3)
{
  std::string in = R"(5 4 1
1000000000 1000000000 1000000000 1000000000 1000000000
1000000000 1000000000 1000000000 1000000000)"s;
  std::string out = R"(0)"s;

  std::ostringstream ost;
  std::istringstream ist(in + "\n");

  solve(ist, ost);
  std::string ostr = ost.str();

  EXPECT_EQ(ostr, out + "\n");
}