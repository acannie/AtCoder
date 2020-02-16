#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* ------- 宣言と入力 ------- */

    string S, T;
    int A, B;
    string U;

    cin >> S >> T;
    cin >> A >> B;
    cin >> U;

    /* ------- 計算 ------- */

    if (U == S)
    {
        A--;
    }
    else
    {
        B--;
    }

    cout << A << " " << B << endl;

    return 0;
}
