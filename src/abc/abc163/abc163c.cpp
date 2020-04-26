#include <bits/stdc++.h>
using namespace std;

void solve(std::istream &ist, std::ostream &ost)
{
    /* ------- 宣言と入力 ------- */

    int N;

    ist >> N;

    vector<int> A;

    for (int i = 1; i < N; i++)
    {
        int tmp;
        ist >> tmp;
        A.emplace_back(tmp);
    }

    /* ------- 計算 ------- */

    int buka_num[N] = {0};

    for (auto a : A)
    {
        buka_num[a - 1]++;
    }

    for (int i = 0; i < N; i++)
    {
        ost << buka_num[i] << endl;
    }
}

#ifndef WOMAIN
int main()
{
    solve(std::cin, std::cout);
    return 0;
}
#endif
