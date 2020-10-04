#include <bits/stdc++.h>
using namespace std;

void solve(std::istream &ist, std::ostream &ost)
{
    /* ------- 宣言と入力 ------- */

    int H, W;
    ist >> H >> W;

    int C_h, C_w, D_h, D_w;

    ist >> C_h >> C_w;
    ist >> D_h >> D_w;

    vector<string> S;

    for (int i = 0; i < H; i++)
    {
        string input;
        ist >> input;
        S.emplace_back(input);
    }

    /* ------- 計算 ------- */

    vector<set<pair<int, int>>> islands;

    // //q初期化
    // queue<pair<int, int>> q;
    // for (int h = 0; h < H; h++)
    // {
    //     for (int w = 0; w < W; w++)
    //     {
    //         if (S.at(h).at(w) == '.')
    //         {
    //             q.push(make_pair(h, w));
    //         }
    //     }
    // }

    // while (!q.empty())
    // {
    //     int now_h = q.front().first;
    //     int now_w = q.front().second;

    //     //左
    //     if (now_h != 0 && S.at(now_h).at(now_w - 1) == '.')
    //     {
    //         q.push();
    //     }
    // }

    // for (int h = 0; h < H; h++)
    // {
    //     for (int w = 0; w < W; w++)
    //     {
    //     }
    // }

    //ost << ans << endl;
}

#ifndef WOMAIN
int main()
{
    solve(std::cin, std::cout);
    return 0;
}
#endif
