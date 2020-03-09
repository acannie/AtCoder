#include <bits/stdc++.h>
using namespace std;

void solve(std::istream &ist, std::ostream &ost)
{
    /* ------- 宣言と入力 ------- */

    int A, B, M;
    ist >> A >> B >> M;

    int a[A], b[B];
    int x[M], y[M], c[M];

    for (int i = 0; i < A; i++)
    {
        ist >> a[i];
    }

    for (int i = 0; i < B; i++)
    {
        ist >> b[i];
    }

    for (int i = 0; i < M; i++)
    {
        ist >> x[i] >> y[i] >> c[i];
    }

    /* ------- 計算 ------- */

    int min_a = 2 * 100000;
    int min_b = 2 * 100000;

    for (int i = 0; i < A; i++)
    {
        min_a = min(min_a, a[i]);
    }

    for (int i = 0; i < B; i++)
    {
        min_b = min(min_b, b[i]);
    }

    int minimum = min_a + min_b;

    for (int i = 0; i < M; i++)
    {
        int price = a[x[i]-1] + b[y[i]-1] - c[i];
        minimum = min(minimum, price);
    }

    ost << minimum << endl;
}

#ifndef WOMAIN
int main()
{
    solve(std::cin, std::cout);
    return 0;
}
#endif
