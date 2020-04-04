#include <bits/stdc++.h>
using namespace std;

void solve(std::istream &ist, std::ostream &ost)
{
    /* ------- 宣言と入力 ------- */

    int N, M;

    ist >> N >> M;

    vector<int> A;
    int vote_sum = 0;

    for (int i = 0; i < N; i++)
    {
        int tmp;
        ist >> tmp;
        A.emplace_back(tmp);
        vote_sum += A[i];
    }

    /* ------- 計算 ------- */

    //sort(A.begin(), A.end(), std::greater<int>());

    int choose = 0;

    for (auto it = A.begin(); it != A.end(); it++)
    {
        if (*it >= ceil((double)vote_sum / (4 * M)))
        {
            choose++;
        }
    }

    if (choose >= M)
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
