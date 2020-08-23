#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

void solve(std::istream &ist, std::ostream &ost)
{
    /* ------- 宣言と入力 ------- */

    int H, W, M;
    ist >> H >> W >> M;

    set<pair<int, int>> bomb;

    for (int i = 0; i < M; i++)
    {
        int M_h, M_w;
        ist >> M_h >> M_w;
        bomb.insert(make_pair(M_h-1, M_w-1));
    }

    /* ------- 計算 ------- */

    vector<int> H_M_count;
    vector<int> W_M_count;

    for (int i = 0; i < H; i++)
    {
        H_M_count.emplace_back(0);
    }

    for (int i = 0; i < W; i++)
    {
        W_M_count.emplace_back(0);
    }

    for (auto b : bomb)
    {
        H_M_count.at(b.first)++;
        W_M_count.at(b.second)++;
    }

    int max_h = 0;
    int max_w = 0;
    for (auto h_m : H_M_count)
    {
        if (h_m >= max_h)
        {
            max_h = h_m;
        }
    }
    for (auto w_m : W_M_count)
    {
        if (w_m >= max_w)
        {
            max_w = w_m;
        }
    }

    vector<int> max_h_vector;
    vector<int> max_w_vector;
    for (int i = 0; i < H_M_count.size(); i++)
    {
        if (H_M_count.at(i) == max_h)
        {
            max_h_vector.emplace_back(i);
        }
    }

    for (int i = 0; i < W_M_count.size(); i++)
    {
        if (W_M_count.at(i) == max_w)
        {
            max_w_vector.emplace_back(i);
        }
    }

    int max_able_bomb = 0;

    for (int i = 0; i < max_h_vector.size(); i++)
    {
        for (int j = 0; j < max_w_vector.size(); j++)
        {
            int able_bomb = H_M_count.at(max_h_vector.at(i)) + W_M_count.at(max_w_vector.at(j));

            pair<int, int> bbb = make_pair(max_h_vector.at(i), max_w_vector.at(j));

            for (auto b : bomb)
            {
                if (bbb == b)
                {
                    able_bomb -= 1;
                }
            }

            max_able_bomb = max(able_bomb, max_able_bomb);
        }
    }

    ost << max_able_bomb << endl;
}

#ifndef WOMAIN
int main()
{
    solve(std::cin, std::cout);
    return 0;
}
#endif
