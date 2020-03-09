#include <bits/stdc++.h>
using namespace std;

void solve(std::istream& ist, std::ostream& ost)
{
    /* ------- 宣言と入力 ------- */

    long long N, A, B;

    ist >> N >> A >> B;

    /* ------- 計算 ------- */

    long long sum = A + B;

    long long ans = 0;

    ans += N / sum * A;

    if (N % sum < A)
    {
        ans += N % sum;
    }
    else
    {
        ans += A;
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

