#include <bits/stdc++.h>
using namespace std;

void solve(std::istream &ist, std::ostream &ost)
{
    /* ------- 宣言と入力 ------- */

    int N;

    ist >> N;

    int a[N - 1], b[N - 1];

    for (int i = 0; i < N-1; i++)
    {
        ist >> a[i]>>b[i];
    }

    /* ------- 計算 ------- */

    //ost << ans << endl;
}

#ifndef WOMAIN
int main()
{
    solve(std::cin, std::cout);
    return 0;
}
#endif
