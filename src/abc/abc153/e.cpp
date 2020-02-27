#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* ------- 宣言と入力 ------- */

    int H, N;

    cin >> H >> N;

    int A[N];
    int B[N];

    for (int i = 0; i < N; i++)
    {
        cin >> A[i] >> B[i];
    }

    /* ------- 計算 ------- */

    long long int cost[H + 10000 + 1] = {};
    cost[0] = 0;

    for (int i = 0; i <= H; i++)
    {
        for (int j = 0; j < N; j++)
        {
            int damage = i + A[j];
            if (cost[i] + B[j] < cost[damage])
            {
                cost[damage] = cost[i] + B[j];
            }
        }
    }

    long long int cost_min = pow(10, 4);

    for (int i = H; i < H + 100000; i++)
    {
        if (cost_min < cost[i])
        {
            cost_min = cost[i];
        }
    }

    cout << cost_min << endl;

    return 0;
}
