#include <bits/stdc++.h>
using namespace std;

void solve(std::istream& ist, std::ostream& ost)
{
    /* ------- 宣言と入力 ------- */

    int N, M;

    ist >> N >> M;

    vector<int> ans(N);

    vector<pair<int, int>> p(M);

    for (int i = 0; i < M; i++)
    {
        int s, c;
        ist >> s >> c;
        p[i] = make_pair(s, c);
    }

    /* ------- 計算 ------- */

    sort(p.begin(), p.end());

    for (int i = 0; i < M; i++)
    {
        if (i != 0 && p[i - 1].first == p[i].first && p[i - 1].second != p[i].second)
        {
            ost << "-1" << endl;
            return;
        }

        if (N > 1 && p[i].first == 1 && p[i].second == 0)
        {
            ost << "-1" << endl;
            return;
        }
    }

    for (int i = 0; i < N; i++)
    {
        ans[i] = 0;
    }

    if (N == 1)
    {
        ans[0] = 0;
    }
    else
    {
        ans[0] = 1;
    }
    
    for (int i = 0; i < M; i++)
    {
        ans[p[i].first - 1] = p[i].second;
    }

    for (int i = 0; i < N; i++)
    {
        ost << ans[i];
    }
    ost << endl;
}

#ifdef WIMAIN
int main()
{
    solve(std::cin, std::cout);
    return 0;
}
#endif

