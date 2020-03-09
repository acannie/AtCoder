#include <bits/stdc++.h>
using namespace std;

void solve(std::istream &ist, std::ostream &ost)
{
    /* ------- 宣言と入力 ------- */

    string S;

    ist >> S;

    /* ------- 計算 ------- */

    string ans = "No";

    for (int i = 0; i < S.length()/2; i = i + 2)
    {
        if (S[i] == 'h' && S[i + 1] == 'i')
        {
            ans = "Yes";
        }
        else
        {
            ans = "No";
        }
    }

    if(S.length() %2==1 ){
        ans = "No";
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
