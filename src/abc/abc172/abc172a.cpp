#include <bits/stdc++.h>
using namespace std;

void solve(std::istream& ist, std::ostream& ost)
{
    /* ------- 宣言と入力 ------- */

    int a;
    ist >> a;

    /* ------- 計算 ------- */

    ost << a + pow(a, 2)+pow(a,3) << endl;

}

#ifndef WOMAIN
int main()
{
    solve(std::cin, std::cout);
    return 0;
}
#endif

