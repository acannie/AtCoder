#include <bits/stdc++.h>
using namespace std;

void solve(std::istream &ist, std::ostream &ost)
{
    /* ------- 宣言と入力 ------- */

    int N;
    ist >> N;

    unordered_set<string> keihin;

    for (int i = 0; i < N; i++)
    {
        string input;
        ist >> input;
        keihin.emplace(input);
    }

    /* ------- 計算 ------- */

    ost << keihin.size() << endl;
}

#ifndef WOMAIN
int main()
{
    solve(std::cin, std::cout);
    return 0;
}
#endif
