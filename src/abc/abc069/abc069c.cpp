#include <bits/stdc++.h>
using namespace std;

void solve(std::istream &ist, std::ostream &ost)
{
    /* ------- 宣言と入力 ------- */

    int N;

    ist >> N;

    vector<int> a;

    for (int i = 0; i < N; i++)
    {
        int tmp;
        ist >> tmp;
        a.emplace_back(tmp);
    }

    /* ------- 計算 ------- */

    int two = 0;
    int four = 0;
    int others = 0;

    for (auto n : a)
    {
        if (n % 4 == 0)
        {
            four++;
        }
        else if (n % 2 == 0)
        {
            two++;
        }
        else
        {
            others++;
        }
    }

    if ((two != 0 && others <= four) || (two == 0 && others <= four + 1))
    {
        ost << "Yes" << endl;
    }
    else
    {
        ost << "No" << endl;
    }
}

#ifndef WOMAIN
int main()
{
    solve(std::cin, std::cout);
    return 0;
}
#endif
