#include <bits/stdc++.h>
using namespace std;

void solve(std::istream &ist, std::ostream &ost)
{
    /* ------- 宣言と入力 ------- */

    int K;
    int A, B;
    ist >> K >> A >> B;

    /* ------- 計算 ------- */

    for(int i = A; i <= B; i++) {
        if(i%K == 0) {
            ost << "OK" << endl;
            return;
        }
    }

    ost << "NG" << endl;
}

#ifndef WOMAIN
int main()
{
    solve(std::cin, std::cout);
    return 0;
}
#endif
