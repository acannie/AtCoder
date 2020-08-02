#include <bits/stdc++.h>
using namespace std;

void solve(std::istream &ist, std::ostream &ost)
{
    /* ------- 宣言と入力 ------- */

    int N;
    ist >> N;

    vector<int> h;

    for (int i = 0; i < N; i++)
    {
        int input;
        ist >> input;
        h.emplace_back(input);
    }

    /* ------- 計算 ------- */

    vector<int> dp;

    dp.emplace_back(0);
    dp.emplace_back(abs(h.at(1) - h.at(0)));

    for (int i = 2; i < N; i++)
    {
        int step_1_jump = dp.at(i - 1) + abs(h.at(i) - h.at(i - 1));
        int step_2_jump = dp.at(i - 2) + abs(h.at(i) - h.at(i - 2));
        int min_small = min(step_1_jump, step_2_jump);
        dp.emplace_back(min_small);
    }

    ost << dp.at(N - 1) << endl;
}

#ifndef WOMAIN
int main()
{
    solve(std::cin, std::cout);
    return 0;
}
#endif
