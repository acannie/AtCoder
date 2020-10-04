#include <bits/stdc++.h>
using namespace std;

long long get_mod(long long N, long long mod)
{
    if (N < 0)
    {
        N += mod;
    }
    else if (N >= mod)
    {
        N %= mod;
    }
    return N;
}

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
        get_mod(ans, mod);
    }

    // 0-8で構成

    long long not_ans = 1;

    for (long long i = 0; i < N; i++)
    {
        not_ans *= 9;
        get_mod(not_ans, mod);
    }

    ans -= not_ans;
    get_mod(ans, mod);

    // 1-9で構成

    not_ans = 1;

    for (long long i = 0; i < N; i++)
    {
        not_ans *= 9;
        get_mod(not_ans, mod);
    }

    ans -= not_ans;
    get_mod(ans, mod);

    // 1-8で構成を1つ足す

    long long plus_ans = 1;

    for (long long i = 0; i < N; i++)
    {
        plus_ans *= 8;
        get_mod(plus_ans, mod);
    }

    ans += plus_ans;
    get_mod(ans, mod);

    ost << ans << endl;
}

#ifndef WOMAIN
int main()
{
    solve(std::cin, std::cout);
    return 0;
}
#endif
