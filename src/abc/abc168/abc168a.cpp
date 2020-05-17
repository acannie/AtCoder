#include <bits/stdc++.h>
using namespace std;

void solve(std::istream &ist, std::ostream &ost)
{
    /* ------- 宣言と入力 ------- */

    int N;
    ist >> N;

    /* ------- 計算 ------- */

    int N_amari = N % 10;

    if (N_amari == 3)
    {
        ost << "bon" << endl;
        return;
    }

    if (N_amari == 0 || N_amari == 1 || N_amari == 6 || N_amari == 8)
    {
        ost << "pon" << endl;
        return;
    }

    ost << "hon" << endl;
}

#ifndef WOMAIN
int main()
{
    solve(std::cin, std::cout);
    return 0;
}
#endif
