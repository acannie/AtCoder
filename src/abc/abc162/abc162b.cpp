#include <iostream>
using namespace std;

void solve(std::istream &ist, std::ostream &ost)
{
    /* ------- 宣言と入力 ------- */

    int N;

    ist >> N;

    /* ------- 計算 ------- */

    long long sum = 0;

    for (int i = 1; i <= N; i++)
    {
        if (i % 3 != 0 && i % 5 != 0)
        {
            sum += i;
        }
    }

    ost << sum << endl;
}

#ifndef WOMAIN
int main()
{
    solve(std::cin, std::cout);
    return 0;
}
#endif
