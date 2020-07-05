#include <bits/stdc++.h>
using namespace std;

int count_black(int H, int W, vector<string> cells)
{
    // 黒いマスの数を数える
    int black = 0;
    for (int row = 0; row < H; row++)
    {
        for (int col = 0; col < W; col++)
        {
            if (cells.at(row).at(col) == '#')
            {
                black++;
            }
        }
    }

    return black;
}

bool check(int row_pattern, int col_pattern, vector<string> cells, int H, int W, int K)
{
    // row_patternで表される行とcol_patternで表される列を赤で塗りつぶす
    for (int row = 0; row < H; row++)
    {
        for (int col = 0; col < W; col++)
        {
            // row_pattern の 下から row番目の bit が 1 (立っている) かどうか
            // row番目の行を赤で塗りつぶすというパターンかどうか
            if (row_pattern & (1 << row))
            {
                cells.at(row).at(col) = '$';
            }
            // col_pattern の 下から col番目の bit が 1 (立っている) かどうか
            // col番目の列を赤で塗りつぶすというパターンかどうか
            if (col_pattern & (1 << col))
            {
                cells.at(row).at(col) = '$';
            }
        }
    }

    return count_black(H, W, cells) == K;
}

void solve(std::istream &ist, std::ostream &ost)
{
    // 変数の読み込み
    int H, W, K;
    ist >> H >> W >> K;
    vector<string> c(H);
    for (int i = 0; i < H; i++)
    {
        ist >> c.at(i);
    }

    int ans = 0;

    // bit 全探索。高さHの各行について、塗りつぶす場合はその行のbitを立てるようなパターンとしてrow_patternを表す
    // そのパターンの数は、2^Hある
    for (int row_pattern = 0; row_pattern < (1 << H); row_pattern++)
    {
        // bit 全探索。幅Wの各列について、塗りつぶす場合はその列のbitを立てるようなパターンとしてcol_patternを表す
        // そのパターンの数は、2^Wある
        for (int col_pattern = 0; col_pattern < (1 << W); col_pattern++)
        {
            // 黒いマスがちょうどK個残るようなパターンであるかどうか
            if (check(row_pattern, col_pattern, c, H, W, K))
            {
                ans++;
            }
        }
    }
    ost << ans << endl;
}

#ifndef WOMAIN
int main()
{
    solve(std::cin, std::cout);
    return 0;
}
#endif