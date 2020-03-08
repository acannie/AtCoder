#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* ------- 宣言と入力 ------- */

    long long int N,K;

    cin >> N>>K;

    /* ------- 計算 ------- */

    long long int ans = 0;

    while (N>0)
    {
        N /= K;
        ans++;
    }

    cout << ans << endl;

    return 0;
}
