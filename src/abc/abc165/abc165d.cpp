#include <bits/stdc++.h>
using namespace std;

void solve(std::istream &ist, std::ostream &ost)
{
    /* ------- 宣言と入力 ------- */

    long long A, B, N;
    ist >> A >> B >> N;

    /* ------- 計算 ------- */
    long long  x;

    if (B == 1)
    {
        ost << "0" << endl;
        return;
    }

    if (B > N)
    {
        x = N;
    }
    else
    {
        x = B - 1;
    }

    // long long ans = ((x % B) * A) / B;
    long long tmp1 = floor((double)A * x / B);
    long long tmp2 = A * floor((double)x / B);
    long long ans = tmp1 - tmp2;

    ost << ans << endl;
}

#ifndef WOMAIN
int main()
{
    solve(std::cin, std::cout);
    return 0;
}
#endif
