#include <bits/stdc++.h>
using namespace std;

long long int mod_pow(long long int n, long long int p, long long int mod)
{
    if (p == 0)
    {
        return 1;
    }
    if (p % 2 == 0)
    {
        // long long int t = mod_pow(n, p / 2, mod);
        //return mod_pow(mod_pow(n, p / 2, mod), 2, mod) % mod;
        return mod_pow(n * n % mod, p / 2, mod) % mod;
    }
    return (n * mod_pow(n, p - 1, mod)) % mod;
}

//x*(x-1)*(x-2)*...*(x-k+1)
long long int permutation(long long int x, long long int k, long long int mod)
{
    long long int ans = 1;

    for (long long int i = 0; i < k; i++)
    {
        ans *= x - i;
        ans %= mod;
    }

    return ans;
}

long long int factorial(long long int n, long long int mod)
{
    return permutation(n, n, mod);
}

long long int combination(long long int n, long long int k, long long int mod)
{
    long long int X, Y;

    X = permutation(n, k, mod);
    Y = factorial(k, mod);

    long long int inverse_Y = mod_pow(Y, mod - 2, mod);

    return (X * mod_pow(Y, mod - 2, mod)) % mod;
}

int main()
{
    /* ------- 宣言と入力 ------- */

    long long int n, a, b;

    cin >> n >> a >> b;

    /* ------- 計算 ------- */

    long long int mod = 1000000007;

    long long int ans;

    ans = mod_pow(2, n, mod);

    a = min(a, n - a);
    b = min(b, n - b);

    long long int nCa = combination(n, a, mod);
    long long int nCb = combination(n, b, mod);
    long long int nC0 = combination(n, 0, mod);

    ans -= (nCa + nCb + nC0) % mod;

    if (ans < 0)
    {
        ans += mod;
    }

    cout << ans << endl;

    return 0;
}
