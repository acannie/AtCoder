#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int A, B, K;

    cin >> A >> B >> K;

    long long int takahashi = A;
    long long int aoki = B;

    if (K <= A)
    {
        takahashi -= K;
    }
    else if (A < K && K < A + B)
    {
        takahashi = 0;
        aoki -= K - A;
    }
    else if (A + B <= K)
    {
        takahashi = 0;
        aoki = 0;
    }

    cout << takahashi << " " << aoki << endl;

    return 0;
}
