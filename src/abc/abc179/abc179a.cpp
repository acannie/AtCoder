#include <bits/stdc++.h>
using namespace std;

void solve(std::istream &ist, std::ostream &ost)
{
    /* ------- 宣言と入力 ------- */

    string S;
    cin >> S;

    /* ------- 計算 ------- */

    string ans;

    if (S.at(S.length() - 1) == 's')
    {
        ans = S + "es";
    }
    else
    {
        ans = S + "s";
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
