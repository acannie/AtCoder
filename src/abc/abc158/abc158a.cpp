#include <bits/stdc++.h>
using namespace std;

void solve(std::istream& ist, std::ostream& ost)
{
    /* ------- 宣言と入力 ------- */

    string S;

    ist >> S;

    /* ------- 計算 ------- */

    if (S == "AAA" || S == "BBB")
    {
        ost << "No" << endl;
    }
    else
    {
        ost << "Yes" << endl;
    }
}

#ifndef DEBUG
int main()
{
    solve(std::cin, std::cout);
    return 0;
}
#endif

