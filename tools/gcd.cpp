#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (b > a)
    {
        int tmp = a;
        a = b;
        b = tmp;
    }

    int k = a % b;

    while (k != 0)
    {
        a = b;
        b = k;
        k = a % b;
    }

    return b;
}

int main()
{
    int a, b;

    cin >> a >> b;

    cout << gcd(a, b) << endl;

    return 0;
}