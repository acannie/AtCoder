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

    sort(factor.begin(), factor.end());

    int ans = (factor[0] - 1) + (factor[1] - 1);

    cout << ans << endl;

    return 0;
}