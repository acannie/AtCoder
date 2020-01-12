#include <bits/stdc++.h>
using namespace std;

int lcm(int a, int b)
{
    int x = a * b;

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

    return x / b;
}

int main()
{
    long long int N, M;

    cin >> N >> M;

    long long int a[N];

    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < N; i++)
    {
        if (a[i] % 4 == 0)
        {
            cout << "0" << endl;
            return 0;
        }
    }

    long long int key = 1;

    for (int i = 0; i < N; i++)
    {
        key = lcm(key, a[i] / 2);
    }

    long long int ans;
    double test = M / key;
    int aaa = ceil(test / 2);

    cout << aaa << endl;

    return 0;
}
