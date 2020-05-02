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
  std::string in = R"(5 7 4)"s;
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
  std::string in = R"(11 10 9)"s;
  std::string out = R"(9)"s;

  std::ostringstream ost;
  std::istringstream ist(in + "\n");

  solve(ist, ost);
  std::string ostr = ost.str();

  EXPECT_EQ(ostr, out + "\n");
}

// /*---------- case 3 ----------*/
// TEST(Test1, case3)
// {
//   std::string in = R"()"s;
//   std::string out = R"()"s;

//   std::ostringstream ost;
//   std::istringstream ist(in + "\n");

//   solve(ist, ost);
//   std::string ostr = ost.str();

//   EXPECT_EQ(ostr, out + "\n");
// }

