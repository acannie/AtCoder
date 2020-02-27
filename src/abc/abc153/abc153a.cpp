#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* ------- 宣言と入力 ------- */

    int H,A;

    cin >> H>>A;

    
    /* ------- 計算 ------- */
    
    int ans=0;

    while (H>0)
    {
        H -= A;
    }

    cout << ans << endl;

    return 0;
}
