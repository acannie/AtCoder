#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int a[N];
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }

    bool able_flg = false;
    int ans = 0;
    int icount = 1;
    for (int i = 0; i < N; i++)
    {
        if (a[i] == icount)
        {
            icount++;
            able_flg = true;
        }
        else
        {
            ans++;
        }
    }

    if (able_flg == true)
    {
        cout << ans << endl;
    }
    else
    {
        cout << "-1" << endl;
    }

    return 0;
}