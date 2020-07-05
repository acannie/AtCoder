#include <bits/stdc++.h>
using namespace std;

void solve(std::istream &ist, std::ostream &ost)
{
    /* ------- 宣言と入力 ------- */

    int N;
    ist >> N;

    vector<string> S;

    for (int i = 0; i < N; i++)
    {
        string input;
        ist >> input;
        S.emplace_back(input);
    }

    /* ------- 計算 ------- */

    unordered_map<string, int> C;

    C.insert(make_pair("AC", 0));
    C.insert(make_pair("WA", 0));
    C.insert(make_pair("TLE", 0));
    C.insert(make_pair("RE", 0));

    for (auto s : S)
    {
        C.at(s)++;
    }

    ost << "AC x " << C.at("AC") << endl;
    ost << "WA x " << C.at("WA") << endl;
    ost << "TLE x " << C.at("TLE") << endl;
    ost << "RE x " << C.at("RE") << endl;
}

#ifndef WOMAIN
int main()
{
    solve(std::cin, std::cout);
    return 0;
}
#endif
