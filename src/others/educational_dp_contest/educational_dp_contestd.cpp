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

    vector<vector<int>> dp_table;

    



    //ost << ans << endl;
}

#ifndef WOMAIN
int main()
{
    solve(std::cin, std::cout);
    return 0;
}
#endif
