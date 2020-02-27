#include <bits/stdc++.h>
using namespace std;

int facctorialMethod(int k)
{
    int sum = 1;
    for (int i = 1; i <= k; ++i)
    {
        sum *= i;
    }
    return sum;
}

int main()
{
    // /* ------- 宣言と入力 ------- */

    // string N;
    // int K;

    // cin >> N;
    // cin >> K;

    // /* ------- 計算 ------- */

    // int keta = N.length();
    // int ans = 0;

    // int upper_digit[3];

    // for (int i = 0; i < 3; ++i)
    // {
    //     upper_digit[i] = (int)(N[i] - '0'); //str[i]　はchar型なのでchar→intへ変換
    // }

    // if (K == 1)
    // {
    //     for (int i = 1; i <= 9; i++)
    //     {
    //         ans += keta - 1;
    //     }

    //     for (int i = 1; i <= upper_digit[0]; i++)
    //     {
    //         ans += 1;
    //     }
    // }
    // else if (K == 2)
    // {
    //     for (int i = 2; i < keta; i++)
    //     {
    //         for (int j = 1; j <= 9; j++)
    //         {
    //             if (i == 2)
    //             {
    //                 ans += 1;
    //             }
    //             else
    //             {
    //                 ans += facctorialMethod(i - 1) / facctorialMethod(i - 2);
    //             }
    //         }

    //         for (int i = 1; i <= upper_digit[0]; i++)
    //         {
    //             for (int j = 1; j <= upper_digit[0]; j++)
    //             {
    //                 ans += facctorialMethod(keta - 1) / facctorialMethod(keta - 2);
    //             }
    //         }
    //     }
    //     // else
    //     // {
    //     // }

    //     cout << ans << endl;

    //     return 0;
    // }
}