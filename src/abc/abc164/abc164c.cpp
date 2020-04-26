#include <bits/stdc++.h>
using namespace std;

void solve(std::istream &ist, std::ostream &ost)
{
    /* ------- 宣言と入力 ------- */

    int N;
    ist >> N;

    vector<string> S;

    unordered_set<string> keihin;

    for (int i = 0; i < N; i++)
    {
        string input;
        ist >> input;
        S.emplace_back(input);
        keihin.emplace(input);
    }

    /* ------- 計算 ------- */
    cout << keihin.size() << endl;
}

#ifndef WOMAIN
int main()
{
    solve(std::cin, std::cout);
    return 0;
}
#endif
