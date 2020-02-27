#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* ------- 宣言と入力 ------- */

    int A, B, C;

    cin >> A >> B >> C;

    /* ------- 計算 ------- */

    string ans = "No";

    if (A == B && A != C)
    {
        ans = "Yes";
    }
    if (B == C && C != A)
    {
        ans = "Yes";
    }
    if (C == A && A != B)
    {
        ans = "Yes";
    }

    cout << ans << endl;

    return 0;
}
