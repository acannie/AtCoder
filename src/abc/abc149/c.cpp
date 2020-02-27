#include <bits/stdc++.h>
using namespace std;

bool is_prime(int x)
{
    for (int i = 2; i * i < x; i++)
    {
        if (x % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int X;

    cin >> X;

    int x = X;

    while (!is_prime(x))
    {
        x++;
    }
    
    cout << x << endl;
    return 0;
}
