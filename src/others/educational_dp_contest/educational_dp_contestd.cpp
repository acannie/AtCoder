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

    vector<vector<long long>> dp_table;

    dp_table.emplace_back(0);
    for (int w_i = 0; w_i <= W; w_i++)
    {
        dp_table.at(0).emplace_back(0);
    }

    for (int i = 0; i < N; i++)
    {
        dp_table.emplace_back(0);
        for (int w_i = 0; w_i <= W; w_i++)
        {
            // i番目の品物を追加できない場合の価値
            long long  insert_value = dp_table.at(i).at(w_i);

            // i番目の品物を追加できる（する）場合の価値
            if (w.at(i) <= w_i)
            {
                insert_value = max(dp_table.at(i).at(w_i - w.at(i)) + v.at(i), insert_value);
            }

            dp_table.at(i + 1).emplace_back(insert_value);
        }
    }

    ost << dp_table.at(N).at(W) << endl;
}

#ifndef WOMAIN
int main()
{
    solve(std::cin, std::cout);
    return 0;
}
#endif
