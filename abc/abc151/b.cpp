#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, K, M;

    cin >> N >> K >> M;

    int A[N];

    int Asum = 0;

    for (int i = 0; i < N - 1; i++)
    {
        cin >> A[i];
        Asum += A[i];
    }

    int ans1 = M * N - Asum;
    double ans2 = ceil(ans1);

    if (ans2 <= 0)
    {
        cout << "0" << endl;
    }
    else if (ans2 <= K)
    {
        cout << ans2 << endl;
    }
    else
    {
        cout << "-1" << endl;
    }

    return 0;
}
