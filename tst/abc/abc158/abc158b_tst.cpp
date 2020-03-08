#include "solve.h"
#include "gtest/gtest.h"

using namespace std::literals::string_literals;

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

TEST(Test1, case1) {

  std::string in = "1 2 3 6"s;
  std::string out = "6 6"s;

  std::ostringstream ost;
  std::istringstream ist(in + "\n");

  solve(ist, ost);
  std::string ostr = ost.str();

  EXPECT_EQ(ostr, out + "\n");
}

