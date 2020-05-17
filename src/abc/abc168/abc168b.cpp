#include <bits/stdc++.h>
using namespace std;

void solve(std::istream &ist, std::ostream &ost)
{
    /* ------- 宣言と入力 ------- */

    int K;
    string S;
    ist >> K;
    ist >> S;

    /* ------- 計算 ------- */

    if (S.length() <= K)
    {
        ost << S << endl;
        return;
    }

    for (int i = 0; i < K; i++)
    {
        ost << S[i];
    }

    ost << "..." << endl;
}

#ifndef WOMAIN
int main()
{
    solve(std::cin, std::cout);
    return 0;
}
#endif
