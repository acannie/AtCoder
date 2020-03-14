#include <bits/stdc++.h>
using namespace std;

void solve(std::istream &ist, std::ostream &ost)
{
    /* ------- 宣言と入力 ------- */

    long double a, b, c;

    ist >> a >> b >> c;

    /* ------- 計算 ------- */

    if (c - a - b > 0 && 4 * a * b < pow(c - a - b, 2))
    {
        ost << "Yes" << endl;
    }
    else
    {
        ost << "No" << endl;
    }
}

#ifndef WOMAIN
int main()
{
    solve(std::cin, std::cout);
    return 0;
}
#endif
