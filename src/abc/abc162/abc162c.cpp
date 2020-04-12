#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if (b > a)
    {
        int tmp = a;
        a = b;
        b = tmp;
    }

    int k = a % b;

    while (k != 0)
    {
        a = b;
        b = k;
        k = a % b;
    }

    return b;
}

void solve(std::istream &ist, std::ostream &ost)
{
    /* ------- 宣言と入力 ------- */

    int K;

    ist >> K;

    /* ------- 計算 ------- */

    long long ans = 0;

    for (int a = 1; a <= K; a++)
    {
        for (int b = 1; b <= K; b++)
        {
            for (int c = 1; c <= K; c++)
            {
                ans += gcd(gcd(a,b),c);
            }
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
