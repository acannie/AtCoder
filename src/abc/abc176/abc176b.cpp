#include <bits/stdc++.h>
using namespace std;

void solve(std::istream &ist, std::ostream &ost)
{
    /* ------- 宣言と入力 ------- */

    string N;
    ist >> N;

    /* ------- 計算 ------- */

    long long sum = 0;
    for (auto n : N)
    {
        int num = (int)n - 48;
        sum += num;
    }

    if (sum % 9 == 0)
    {
        ost << "Yes" << endl;
    }
    else
    {
        ost << "No" << endl;
    }
}

#ifndef WOMAIN
int main()
{
    solve(std::cin, std::cout);
    return 0;
}
#endif
