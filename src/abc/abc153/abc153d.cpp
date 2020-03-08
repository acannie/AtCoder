#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* ------- 宣言と入力 ------- */

    long long int H;

    cin >> H;

    /* ------- 計算 ------- */

    int jou;

    for (int i = 0; i < 100; i++)
    {
        if (H < pow(2, i + 1))
        {
            jou = i;
            break;
        }
    }

    long long int ans=0;

    for (int i = 0; i <= jou; i++)
    {
        ans += pow(2, i);
    }

    cout << ans << endl;

    return 0;
}
