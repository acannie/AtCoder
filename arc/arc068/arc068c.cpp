#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int x;
    cin >> x;

    long long int ans = x / 11 * 2;

    if (x % 11 == 0)
    {
        // do nothing
        // ans += 0;
    }
    else if (x % 11 <= 6)
    {
        ans += 1;
    }
    else
    {
        ans += 2;
    }

    cout << ans << endl;
    return 0;
}