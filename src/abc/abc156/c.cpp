#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* ------- 宣言と入力 ------- */

    int N;

    cin >> N;

    int X[N];

    for (int i = 0; i < N; i++)
    {
        cin >> X[i];
    }

    /* ------- 計算 ------- */

    sort(X, X + N);

    int d[100] = {0};
    int min = 10000 * 100;

    for (int P = 1; P <= 100; P++)
    {
        for (int i = 0; i < N; i++)
        {
            d[P] += pow(X[i] - P, 2);
        }
        if (d[P] < min)
        {
            min = d[P];
        }
    }

    cout << min << endl;

    return 0;
}
