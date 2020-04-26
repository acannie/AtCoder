#include <bits/stdc++.h>
using namespace std;

void solve(std::istream &ist, std::ostream &ost)
{
    /* ------- 宣言と入力 ------- */

    int N, K;

    ist >> N >> K;

    /* ------- 計算 ------- */

    //累積和
    long long int sum[N + 1] = {0};
    long long now_sum = 0;
    for (int i = 0; i < N + 1; i++)
    {
        now_sum += i;
        sum[i] = now_sum;
    }

    long long int mod = 1000000007;
    long long ans = 1;

    for (int i = K; i < N + 1; i++)
    {
        ans += (sum[N] - sum[N - i] + 1) - sum[i - 1];
        if (ans >= mod)
        {
            ans %= mod;
        }
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
