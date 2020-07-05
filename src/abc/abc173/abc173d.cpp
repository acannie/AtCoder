#include <bits/stdc++.h>
using namespace std;

void solve(std::istream& ist, std::ostream& ost)
{
    /* ------- 宣言と入力 ------- */

    int N;
    ist >> N;

    vector<long long> A;

    for(int i = 0; i < N; i++)
    {
        long long input;
        ist >> input;
        A.emplace_back(input);
    }

    /* ------- 計算 ------- */

    //ost << ans << endl;

}

#ifndef WOMAIN
int main()
{
    solve(std::cin, std::cout);
    return 0;
}
#endif

