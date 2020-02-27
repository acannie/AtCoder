#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* ------- 宣言と入力 ------- */

    int N, R;

    cin >> N >> R;

    /* ------- 計算 ------- */

    int ans;

    if (N < 10)
    {
        ans = R + 100 * (10 - N);
    }
    else
    {
        ans = R;
    }

    cout << ans << endl;

    return 0;
}
