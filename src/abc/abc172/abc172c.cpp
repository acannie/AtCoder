#include <bits/stdc++.h>
using namespace std;

void solve(std::istream &ist, std::ostream &ost)
{
    /* ------- 宣言と入力 ------- */

    long long N, M, K;
    ist >> N >> M >> K;

    vector<long long> A;
    vector<long long> B;

    for (int i = 0; i < N; i++)
    {
        int input;
        ist >> input;
        A.emplace_back(input);
    }

    for (int i = 0; i < M; i++)
    {
        int input;
        ist >> input;
        B.emplace_back(input);
    }

    /* ------- 計算 ------- */
    long long time_sum = 0;
    int a = 0;
    int b = 0;

    while (a < A.size() && time_sum + A.at(a) <= K)
    {
        time_sum += A.at(a);
        a++;
    }

    //累積和を計算
    vector<long long> A_cul_sum_vec;
    vector<long long> B_cul_sum_vec;

    int A_cul_sum = 0;
    A_cul_sum_vec.emplace_back(0);
    for (int i = 0; i < A.size(); i++)
    {
        A_cul_sum += A.at(i);
        A_cul_sum_vec.emplace_back(A_cul_sum);
    }

    int B_cul_sum = 0;
    B_cul_sum_vec.emplace_back(0);
    for (int i = 0; i < B.size(); i++)
    {
        B_cul_sum += B.at(i);
        B_cul_sum_vec.emplace_back(B_cul_sum);
    }
    //累積和計算ここまで

    int can_read_max = 0;
    int j = 0;
    for (int i = a; i >= 0; i--)
    {
        while (j < B.size() && A_cul_sum_vec.at(i) + B_cul_sum_vec.at(j + 1) <= K)
        {
            j++;
        }
        can_read_max = max(i + j, can_read_max);
    }
    ost << can_read_max << endl;
}

#ifndef WOMAIN
int main()
{
    solve(std::cin, std::cout);
    return 0;
}
#endif
