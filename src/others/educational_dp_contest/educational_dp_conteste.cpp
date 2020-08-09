#include <bits/stdc++.h>
using namespace std;

// void solve(std::istream &ist, std::ostream &ost)
// {
//     /* ------- 宣言と入力 ------- */

//     int N, W;
//     ist >> N >> W;

//     vector<int> w;
//     vector<int> v;

//     for (int i = 0; i < N; i++)
//     {
//         int input_w, input_v;
//         ist >> input_w >> input_v;
//         w.emplace_back(input_w);
//         v.emplace_back(input_v);
//     }

//     /* ------- 計算 ------- */

//     vector<vector<long long>> dp_table;

//     dp_table.emplace_back(0);
//     for (int w_i = 0; w_i <= W; w_i++)
//     {
//         dp_table.at(0).emplace_back(0);
//     }

//     int MAX_V = 1000;

//     // DPループ
//     for (int i = 0; i < N; ++i)
//     {
//         dp_table.emplace_back(0);
//         for (int sum_v = 0; sum_v < MAX_V; ++sum_v)
//         {
//             // i番目の品物を追加できない場合の価値
//             long long insert_value = dp_table[i][sum_v];

//             // i番目の品物を追加できる（する）場合の価値
//             if (sum_v - v[i] >= 0)
//             {
//                 insert_value = max(dp_table[i][sum_v - v[i]] + w[i], insert_value);
//             }

//             dp_table.at(i + 1).emplace_back(insert_value);
//         }
//     }

//     // 最適値の出力
//     long long res = 0;
//     for (int sum_v = 0; sum_v < MAX_V; ++sum_v)
//     {
//         if (dp_table[N][sum_v] <= W)
//             res = sum_v;
//     }
//     ost << res << endl;
// }

template <class T>
inline bool chmax(T &a, T b)
{
    if (a < b)
    {
        a = b;
        return true;
    }
    return false;
}
template <class T>
inline bool chmin(T &a, T b)
{
    if (a > b)
    {
        a = b;
        return true;
    }
    return false;
}

void solve(std::istream &ist, std::ostream &ost)
{
    int MAX_N = 110;
    int MAX_V = 100100;

    // 入力
    int N;
    long long W;
    long long weight[MAX_N], value[MAX_N]; // 品物の個数は 100 個なので少し余裕持たせてサイズ 110 に

    // DPテーブル
    long long dp[MAX_N][MAX_V];

    ist >> N >> W;

    for (int i = 0; i < N; ++i)
        ist >> weight[i] >> value[i];

    // 初期化
    for (int i = 0; i < MAX_N; ++i)
        for (int j = 0; j < MAX_V; ++j)
            dp[i][j] = INT_MAX;

    // 初期条件
    dp[0][0] = 0;

    // DPループ
    for (int i = 0; i < N; ++i)
    {
        for (int sum_v = 0; sum_v < MAX_V; ++sum_v)
        {

            // i 番目の品物を選ぶ場合
            if (sum_v - value[i] >= 0)
                chmin(dp[i + 1][sum_v], dp[i][sum_v - value[i]] + weight[i]);

            // i 番目の品物を選ばない場合
            chmin(dp[i + 1][sum_v], dp[i][sum_v]);
        }
    }

    // 最適値の出力
    long long res = 0;
    for (int sum_v = 0; sum_v < MAX_V; ++sum_v)
    {
        if (dp[N][sum_v] <= W)
            res = sum_v;
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
