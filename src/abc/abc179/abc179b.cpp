#include <bits/stdc++.h>
using namespace std;

void solve(std::istream &ist, std::ostream &ost)
{
    /* ------- 宣言と入力 ------- */

    int N;
    ist >> N;

    vector<vector<int>> D;

    for (int i = 0; i < N; i++)
    {
        int input1, input2;
        ist >> input1 >> input2;
        D.emplace_back(0);

        D.at(i).emplace_back(input1);
        D.at(i).emplace_back(input2);
    }

    /* ------- 計算 ------- */

    int zorome_count = 0;
    int max_zorome_count = 0;

    for (int i = 0; i < N; i++)
    {
        if (D.at(i).at(0) == D.at(i).at(1))
        {
            zorome_count++;
            if (zorome_count > max_zorome_count)
            {
                max_zorome_count = zorome_count;
            }
        }
        else
        {
            zorome_count = 0;
        }
    }

    if (max_zorome_count >= 3)
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
