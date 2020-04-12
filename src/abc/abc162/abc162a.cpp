#include <iostream>
using namespace std;

void solve(std::istream &ist, std::ostream &ost)
{
    /* ------- 宣言と入力 ------- */

    int N;

    ist >> N;

    /* ------- 計算 ------- */

    while (N != 0)
    {
        if (N % 10 == 7)
        {
            ost << "Yes" << endl;
            return;
        }
        N /= 10;
    }

    ost << "No" << endl;
}

#ifndef WOMAIN
int main()
{
    solve(std::cin, std::cout);
    return 0;
}
#endif
