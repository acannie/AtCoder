#include <bits/stdc++.h>
using namespace std;

void solve(std::istream& ist, std::ostream& ost)
{
    /* ------- 宣言と入力 ------- */

int K;
    ist >> K;


    /* ------- 計算 ------- */

        int N[32] = {1, 1, 1, 2, 1, 2, 1, 5, 2, 2, 1, 5, 1, 2, 1, 14, 1, 5, 1, 5, 2, 2, 1, 15, 2, 2, 5, 4, 1, 4, 1, 51};


ost << N[K-1] << endl;

}

#ifndef WOMAIN
int main()
{
    solve(std::cin, std::cout);
    return 0;
}
#endif

