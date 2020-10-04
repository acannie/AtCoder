#include <bits/stdc++.h>
using namespace std;

void solve(std::istream &ist, std::ostream &ost)
{
    /* ------- 宣言と入力 ------- */

    long long N;
    ist >> N;

    /* ------- 計算 ------- */

    long long ans = 1;
    long long mod = pow(10, 9) + 7;

    // 全て

    for (long long i = 0; i < N; i++)
    {
        ans *= 10;
        if (ans >= mod)
        {
            ans %= mod;
        }
    }

    // 0-8で構成

    long long not_ans = 1;

    for (long long i = 0; i < N; i++)
    {
        not_ans *= 9;
        if (not_ans >= mod)
        {
            not_ans %= mod;
        }
    }

    ans -= not_ans;
    if (ans < 0)
    {
        ans += mod;
    }

    // 1-9で構成

    not_ans = 1;

    for (long long i = 0; i < N; i++)
    {
        not_ans *= 9;
        if (not_ans >= mod)
        {
            not_ans %= mod;
        }
    }

    ans -= not_ans;
    if (ans < 0)
    {
        ans += mod;
    }

    // 1-8で構成を1つ足す

    long long plus_ans = 1;

    for (long long i = 0; i < N; i++)
    {
        plus_ans *= 8;
        if (plus_ans >= mod)
        {
            plus_ans %= mod;
        }
    }

    ans += plus_ans;
    if (ans >= mod)
    {
        ans %= mod;
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
