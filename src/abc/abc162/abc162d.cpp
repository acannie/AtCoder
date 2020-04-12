#include <bits/stdc++.h>
using namespace std;

void solve(std::istream &ist, std::ostream &ost)
{
    /* ------- 宣言と入力 ------- */

    int N;
    string S;

    ist >> N;
    ist >> S;

    /* ------- 計算 ------- */

    unordered_set<int> R;
    unordered_set<int> G;
    unordered_set<int> B;

    for (int i = 0; i < N; i++)
    {
        if (S[i] == 'R')
        {
            R.emplace(i);
        }
        else if (S[i] == 'G')
        {
            G.emplace(i);
        }
        else if (S[i] == 'B')
        {
            B.emplace(i);
        }
    }

    // unordered_set<int> maxsize;
    long long ans = R.size() * G.size() * B.size();

    for (auto g : G)
    {
        for (auto b : B)
        {
            if (R.find(min(g, b) - abs(g - b)) != R.end())
            {
                ans--;
            }

            if (R.find(max(g, b) + abs(g - b)) != R.end())
            {
                ans--;
            }

            if (abs(g - b) % 2 == 0 && R.find(max(g, b) - abs(g - b) / 2) != R.end())
            {
                ans--;
            }
        }
    }

    cout << ans << endl;
}

#ifndef WOMAIN
int main()
{
    solve(std::cin, std::cout);
    return 0;
}
#endif
