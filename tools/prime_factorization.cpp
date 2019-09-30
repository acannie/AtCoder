#include <bits/stdc++.h>
using namespace std;

void prime_factorization(int n, vector<int> &factor)
{
    int fanctor_num = 0;
    int n_cpy = n;

    int i = 2;

    while (n > 1)
    {
        if (n % i == 0)
        {
            factor.push_back(i);
            n = n / i;
        }
        else
        {
            i++;
        }
    }
}

int main()
{
    int n;
    vector<int> factor;

    cin >> n;

    prime_factorization(n, factor);

    for (auto it = factor.begin(); it != factor.end(); it++)
    {
        cout << *it << endl;
    }

    return 0;
}