#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* ------- 宣言と入力 ------- */

    int a, b;

    cin >> a >> b;

    /* ------- 計算 ------- */

    for (int i = 0; i < max(a, b); i++)
    {
        cout << min(a, b);
    }

    cout << endl;

    return 0;
}
