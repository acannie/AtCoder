#include <bits/stdc++.h>
using namespace std;

int mod2019(string s, int i, int j)
{
    int num_s = atoi(s.substr(i, j).c_str()) % 2019;
    return num_s;
}

void solve(std::istream &ist, std::ostream &ost)
{
    /* ------- 宣言と入力 ------- */

    string S;
    ist >> S;

    /* ------- 計算 ------- */
    int count = 0;
    int len = S.length();
    for (int i = 0; i < len - 3; i++)
    {
        for (int j = i + 3; j < len; j++)
        {
            int num_s = atoi(S.substr(i, j).c_str());
            if (num_s % 2019 == 0)
            {
                count++;
            }
        }
    }

    ost << count << endl;
}

#ifndef WOMAIN
int main()
{
    solve(std::cin, std::cout);
    return 0;
}
#endif
