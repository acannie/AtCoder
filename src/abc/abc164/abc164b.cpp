#include <bits/stdc++.h>
using namespace std;

void solve(std::istream& ist, std::ostream& ost)
{
    /* ------- 宣言と入力 ------- */

    int A,B,C,D;
    ist >> A>>B>>C>>D;

    /* ------- 計算 ------- */

    while(1) {
        C -=B;
        if(C<=0) {
            cout<<"Yes"<<endl;
            return;
        }

        A-=D;
        if(A<=0) {
            cout<<"No"<<endl;
            return;
        }

    }
    return;

}

#ifndef WOMAIN
int main()
{
    solve(std::cin, std::cout);
    return 0;
}
#endif

