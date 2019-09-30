#include <bits/stdc++.h>
using namespace std;

int lcm(int a, int b)
{
    int x = a*b;

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

    return x/b;
}

int main()
{
    int a, b;

    cin >> a >> b;

    cout << lcm(a, b) << endl;

    return 0;
}