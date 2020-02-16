#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* ------- 宣言と入力 ------- */

    int N, K;

    cin >> N >> K;

    int p[N];

    for (int i = 0; i < N; i++)
    {
        cin >> p[i];
    }

    /* ------- 計算 ------- */

    double p_ave[N];

    for (int i = 0; i < N; i++)
    {
        p_ave[i] = (double)(p[i] + 1) / 2;
    }

    double sum = 0;

    for (int i = 0; i < K; i++)
    {
        sum += p_ave[i];
    }
    double sum_max = sum;

    for (int i = 0; i < N - K; i++)
    {
        sum += p_ave[K + i];
        sum -= p_ave[i];

        if (sum > sum_max)
        {
            sum_max = sum;
        }
    }

    // cout << sum_max << endl;
    printf("%.12lf\n", sum_max);

    return 0;
}
