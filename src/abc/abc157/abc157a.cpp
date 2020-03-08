#include <bits/stdc++.h>
using namespace std;

void solve(std::istream& ist, std::ostream& ost)
{
    /* ------- 宣言と入力 ------- */

    int N;

    ist >> N;

    /* ------- 計算 ------- */
    
    //int ans = (int)ceil((double)N/2);
    int ans = (N + 1) / 2;

    ost << ans << endl;
}

#ifdef WIMAIN
int main()
{
    solve(std::cin, std::cout);
    return 0;
}
#endif

