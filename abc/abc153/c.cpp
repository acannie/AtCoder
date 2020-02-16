#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* ------- 宣言と入力 ------- */

    int N, K;

    cin >> N >> K;

    long long int H[N];

    for (int i = 0; i < N; i++)
    {
        cin >> H[i];
    }

    /* ------- 計算 ------- */

    sort(H, H + N);

    if (K > N)
    {
        K = N;
    }

    long long int ans = 0;

    for (int i = 0; i < K; i++)
    {
        int a = N - i - 1;
        H[N - i - 1] = 0;
    }

    for (int i = 0; i < N; i++)
    {
        ans += H[i];
    }

    cout << ans << endl;

    return 0;
}
