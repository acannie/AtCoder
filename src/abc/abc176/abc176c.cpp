#include <bits/stdc++.h>
using namespace std;

void solve(std::istream &ist, std::ostream &ost)
{
    /* ------- 宣言と入力 ------- */

    int N;
    ist >> N;

    vector<long long> A;

    for (int i = 0; i < N; i++)
    {
        long long input;
        ist >> input;
        A.emplace_back(input);
    }

    /* ------- 計算 ------- */

    long long min_tall = A.at(0);
    long long bastion_height_sum = 0;

    for (auto a : A)
    {
        if (a < min_tall)
        {
            bastion_height_sum += min_tall - a;
        }

        if( a > min_tall) {
            min_tall = a;
        }
    }

    ost << bastion_height_sum << endl;
}

#ifndef WOMAIN
int main()
{
    solve(std::cin, std::cout);
    return 0;
}
#endif
