#include <bits/stdc++.h>
using namespace std;

long long prime_factorization(int n)
{
    int i = 2;

    long long ans = 0;

    while (n > 1)
    {
        if (n % i == 0)
        {
            ans++;
            n = n / i;
        }
        else
        {
            i++;
        }
    }
}

void solve(std::istream &ist, std::ostream &ost)
{
    /* ------- 宣言と入力 ------- */

    long long N;
    ist >> N;

    vector<int> a;

    for (int i = 0; i < N; i++)
    {
        int input;
        ist >> input;
        a.emplace_back(input);
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
