#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* ------- 宣言と入力 ------- */

    int N;

    cin >> N;

    int A[N];

    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    /* ------- 計算 ------- */

    string ans = "APPROVED";

    for (int i = 0; i < N; i++)
    {
        if (A[i] % 2 == 0)
        {
            if (!(A[i] % 3 == 0 || A[i] % 5 == 0))
            {
                ans = "DENIED";
            }
        }
    }

    cout << ans << endl;

    return 0;
}
