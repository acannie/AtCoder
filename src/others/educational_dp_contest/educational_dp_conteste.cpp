#include <bits/stdc++.h>
using namespace std;

void solve(std::istream &ist, std::ostream &ost)
{
    /* ------- 宣言と入力 ------- */

    int N, W;
    ist >> N >> W;

    vector<int> w;
    vector<int> v;

    for (int i = 0; i < N; i++)
    {
        int input_w, input_v;
        ist >> input_w >> input_v;
        w.emplace_back(input_w);
        v.emplace_back(input_v);
    }

    /* ------- 計算 ------- */

    int max_V = 100100;

    vector<vector<long long>> dp_table;

    dp_table.emplace_back(0);
    for (int j = 0; j <= max_V; j++)
    {
        dp_table.at(0).emplace_back(INT_MAX);
    }

    dp_table.at(0).at(0) = 0;

    for (int i = 0; i < N; i++)
    {
        dp_table.emplace_back(0);

        for (int j = 0; j <= max_V; j++)
        {
            // i番目の品物を追加できない場合の価値
            long long insert_value = dp_table.at(i).at(j);

            // i番目の品物を追加できる（する）場合の価値
            if (v.at(i) <= j)
            {
                insert_value = min(dp_table.at(i).at(j - v.at(i)) + w.at(i), insert_value);
            }

            dp_table.at(i + 1).emplace_back(insert_value);
        }
    }

    for (int i = 0; i <= N; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            if (dp_table.at(i).at(j) == INT_MAX)
            {
                cout << "INF"
                     << " ";
            }
            else
            {
                cout << dp_table.at(i).at(j) << " ";
            }
        }
        cout << endl;
    }

    // 最適値の出力
    long long res = 0;
    for (int j = 0; j < max_V; j++)
    {
        if (dp_table[N][j] <= W)
        {
            res = j;
        }
    }
    ost << res << endl;
}

#ifndef WOMAIN
int main()
{
    solve(std::cin, std::cout);
    return 0;
}
#endif
