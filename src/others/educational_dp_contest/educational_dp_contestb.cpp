#include <bits/stdc++.h>
using namespace std;

void solve(std::istream &ist, std::ostream &ost)
{
    /* ------- 宣言と入力 ------- */

    int N;
    int K;
    ist >> N >> K;

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

    for (int i = 1; i < N; i++)
    {
        int min_route = INT_MAX;
        for (int step = 0; step < min(i, K); step++)
        {
            int step_j_jump = dp.at(i - step - 1) + abs(h.at(i) - h.at(i - step - 1));
            min_route = min(step_j_jump, min_route);
        }

        dp.emplace_back(min_route);
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
