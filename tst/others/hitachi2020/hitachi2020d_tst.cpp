#include "solve.h"
#include "gtest/gtest.h"

using namespace std::literals::string_literals;

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

/*---------- case 1 ----------*/
TEST(Test1, case1) {

  std::string in = "3 7\n 2 0\n 3 2\n 0 3\n"s;
  std::string out = "2"s;

  std::ostringstream ost;
  std::istringstream ist(in + "\n");

  solve(ist, ost);
  std::string ostr = ost.str();

  EXPECT_EQ(ostr, out + "\n");
}

/*---------- case 2 ----------*/
TEST(Test1, case2) {

  std::string in = "1 3\n 0 3\n"s;
  std::string out = "0"s;

  std::ostringstream ost;
  std::istringstream ist(in + "\n");

  solve(ist, ost);
  std::string ostr = ost.str();

  EXPECT_EQ(ostr, out + "\n");
}

/*---------- case 3 ----------*/
TEST(Test1, case3) {

  std::string in = "5 21600\n 2 14\n 3 22\n 1 3\n 1 10\n 1 9\n"s;
  std::string out = "5"s;

  std::ostringstream ost;
  std::istringstream ist(in + "\n");

  solve(ist, ost);
  std::string ostr = ost.str();

  EXPECT_EQ(ostr, out + "\n");
}

/*---------- case 4 ----------*/
TEST(Test1, case4) {

  std::string in = "7 57\n 0 25\n 3 10\n 2 4\n 5 15\n 3 22\n 2 14\n 1 15\n"s;
  std::string out = "3"s;

  std::ostringstream ost;
  std::istringstream ist(in + "\n");

  solve(ist, ost);
  std::string ostr = ost.str();

  EXPECT_EQ(ostr, out + "\n");
}


