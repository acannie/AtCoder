#include <bits/stdc++.h>
using namespace std;

void solve(std::istream &ist, std::ostream &ost)
{
    /* ------- 宣言と入力 ------- */

    int N, X, T;
    ist >> N >> X >> T;

    /* ------- 計算 ------- */

    int time_cost = ceil((double)N / X) * T;

    ost << time_cost << endl;
}

#ifndef WOMAIN
int main()
{
    solve(std::cin, std::cout);
    return 0;
}
#endif
