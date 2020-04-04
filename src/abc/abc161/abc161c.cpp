#include <bits/stdc++.h>
using namespace std;

void solve(std::istream &ist, std::ostream &ost)
{
    /* ------- 宣言と入力 ------- */

    long long N, K;

    ist >> N >> K;

    /* ------- 計算 ------- */

    long long ans;

    if (N < K)
    {
        ans = min(abs(N - K), N);
        ost << ans << endl;
        return;
    }
    else if (N == K)
    {
        ost << "0" << endl;
        return;
    }
    else
    {
        int tmp = N % K;
        ans = min(N % K, abs(K - N % K));
        ost << ans << endl;
        return;
    }

    return;
}

#ifndef WOMAIN
int main()
{
    solve(std::cin, std::cout);
    return 0;
}
#endif
