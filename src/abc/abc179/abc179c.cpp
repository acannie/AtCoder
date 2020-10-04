#include <bits/stdc++.h>
using namespace std;

void solve(std::istream &ist, std::ostream &ost)
{
    /* ------- 宣言と入力 ------- */

    int N;
    ist >> N;

    /* ------- 計算 ------- */

    int ans = 0;

    for (int i = 1; i <= N; i++)
    {
        ans += (N - 1) / i;
    }

    ost << ans << endl;
}

#ifndef WOMAIN
int main()
{
    solve(std::cin, std::cout);
    return 0;
}
#endif
