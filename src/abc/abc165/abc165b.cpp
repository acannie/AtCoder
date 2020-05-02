#include <bits/stdc++.h>
using namespace std;

void solve(std::istream &ist, std::ostream &ost)
{
    /* ------- 宣言と入力 ------- */

    double X;
    ist >> X;

    /* ------- 計算 ------- */

    double money = 100;
    int year = 0;

    while (money < X)
    {
        money *= 1.01;
        money = floor(money);
        year++;
    }

    ost << year << endl;
}

#ifndef WOMAIN
int main()
{
    solve(std::cin, std::cout);
    return 0;
}
#endif
