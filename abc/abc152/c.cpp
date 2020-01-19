#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* ------- 宣言と入力 ------- */

    int N;

    cin >> N;

    int P[N];

    for (int i = 0; i < N; i++)
    {
        cin >> P[i];
    }

    /* ------- 計算 ------- */

    int min = P[0];
    int count = 0;

    for (int i = 0; i < N; i++)
    {
        if (P[i] <= min)
        {
            count++;
            min = P[i];
        }
    }

    cout << count << endl;

    return 0;
}
