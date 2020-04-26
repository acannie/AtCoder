#include <bits/stdc++.h>
using namespace std;

void solve(std::istream &ist, std::ostream &ost)
{
    /* ------- 宣言と入力 ------- */

    int N, M;

    ist >> N >> M;

    vector<int> A;

    for (int i = 0; i < M; i++)
    {
        int tmp;
        ist >> tmp;
        A.emplace_back(tmp);
    }

    /* ------- 計算 ------- */

    for (auto a : A)
    {
        N -= a;
    }

    if (N >= 0)
    {
        ost << N << endl;
    }
    else
    {
        ost << -1 << endl;
    }
}

#ifndef WOMAIN
int main()
{
    solve(std::cin, std::cout);
    return 0;
}
#endif
