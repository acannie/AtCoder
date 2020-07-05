#include <bits/stdc++.h>
using namespace std;

void solve(std::istream &ist, std::ostream &ost)
{
    /* ------- 宣言と入力 ------- */

    int N;
    ist >> N;

    /* ------- 計算 ------- */

    ost << ceil((double)N / 1000)* 1000 - N  << endl;
}

#ifndef WOMAIN
int main()
{
    solve(std::cin, std::cout);
    return 0;
}
#endif
