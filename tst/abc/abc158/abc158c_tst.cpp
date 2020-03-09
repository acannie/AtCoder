#include "solve.h"
#include "gtest/gtest.h"

using namespace std::literals::string_literals;

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

TEST(Test1, case1) {

  std::string in = "2 2"s;
  std::string out = "25"s;

  std::ostringstream ost;
  std::istringstream ist(in + "\n");

  solve(ist, ost);
  std::string ostr = ost.str();

  EXPECT_EQ(ostr, out + "\n");
}

TEST(Test1, case2) {

  std::string in = "8 10"s;
  std::string out = "100"s;

  std::ostringstream ost;
  std::istringstream ist(in + "\n");

  solve(ist, ost);
  std::string ostr = ost.str();

  EXPECT_EQ(ostr, out + "\n");
}

TEST(Test1, case3) {

  std::string in = "19 99"s;
  std::string out = "-1"s;

  std::ostringstream ost;
  std::istringstream ist(in + "\n");

  solve(ist, ost);
  std::string ostr = ost.str();

  EXPECT_EQ(ostr, out + "\n");
}

