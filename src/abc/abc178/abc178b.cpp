#include <bits/stdc++.h>
using namespace std;

void solve(std::istream &ist, std::ostream &ost)
{
    /* ------- 宣言と入力 ------- */

    long long a, b, c, d;
    ist >> a >> b >> c >> d;

    /* ------- 計算 ------- */

    long long max_xy = -pow(10, 18);

    if (a * c >= max_xy)
    {
        max_xy = a * c;
    }
    if (a * d >= max_xy)
    {
        max_xy = a * d;
    }

    if (b * c >= max_xy)
    {
        max_xy = b * c;
    }

    if (b * d >= max_xy)
    {
        max_xy = b * d;
    }

    ost << max_xy << endl;
}

#ifndef WOMAIN
int main()
{
    solve(std::cin, std::cout);
    return 0;
}
#endif
