#include <bits/stdc++.h>
using namespace std;

void dfs(std::ostream &ost, int N, string s, char mx)
{
    if (s.length() == N)
    {
        ost << s << endl;
        return;
    }

    for (char c = 'a'; c <= mx; c++)
    {
        char mx_next;
        if (c == mx)
        {
            mx_next = (char)(mx + 1);
        }
        else
        {
            mx_next = mx;
        }

        dfs(ost, N, s + c, mx_next);
    }
}

void solve(std::istream &ist, std::ostream &ost)
{
    /* ------- 宣言と入力 ------- */

    int N;
    ist >> N;

    /* ------- 計算 ------- */

    dfs(ost, N, "", 'a');
}

#ifndef WOMAIN
int main()
{
    solve(std::cin, std::cout);
    return 0;
}
#endif
