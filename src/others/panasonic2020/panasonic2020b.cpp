#include <bits/stdc++.h>
using namespace std;

void solve(std::istream &ist, std::ostream &ost)
{
    /* ------- 宣言と入力 ------- */

    long long H, W;

    ist >> H >> W;

    /* ------- 計算 ------- */

    long long ans;

    if (H % 2 == 0 && W % 2 == 0)
    {
        ans = H * W / 2;
    }
    else if (H % 2 == 1 && W % 2 == 0)
    {
        ans = (H - 1) * W / 2 + W / 2;
    }
    else if (H % 2 == 0 && W % 2 == 1)
    {
        ans = H * (W - 1) / 2 + H / 2;
    }
    else
    {
        ans = (H - 1) / 2 * (W - 1) + (H - 1) / 2 + (W - 1) / 2 + 1;
    }

    if (H == 1 || W == 1)
    {
        ans = 1;
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
