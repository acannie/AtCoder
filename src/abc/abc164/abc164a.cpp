#include <bits/stdc++.h>
using namespace std;

void solve(std::istream &ist, std::ostream &ost)
{
    /* ------- 宣言と入力 ------- */

    int S, W;
    ist >> S >> W;

    /* ------- 計算 ------- */

    if (W >= S)
    {
        cout << "unsafe" << endl;
    }
    else
    {
        cout << "safe" << endl;
    }
}

#ifndef WOMAIN
int main()
{
    solve(std::cin, std::cout);
    return 0;
}
#endif
