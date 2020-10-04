#include <bits/stdc++.h>
using namespace std;

void solve(std::istream &ist, std::ostream &ost)
{
    /* ------- 宣言と入力 ------- */

    int N, K;
    ist >> N >> K;

    vector<int> L;
    vector<int> R;

    for (int i = 0; i < K; i++)
    {
        int input1, input2;
        ist >> input1 >> input2;
        L.emplace_back(input1);
        R.emplace_back(input2);
    }

    /* ------- 計算 ------- */

    long long mod = 998244353;

    //ost << ans << endl;
}

#ifndef WOMAIN
int main()
{
    solve(std::cin, std::cout);
    return 0;
}
#endif
