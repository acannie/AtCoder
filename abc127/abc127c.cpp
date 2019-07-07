#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int N, M;

    cin >> N >> M;

    int L[M + 1];
    int R[M + 1];

    for (int i = 1; i <= M; i++)
    {
        cin >> L[i] >> R[i];
    }

    int Lmax = 0;
    int Rmin = pow(10, 5) + 1;

    for (int i = 1; i <= M; i++)
    {
        if (L[i] > Lmax)
        {
            Lmax = L[i];
        }
        if (R[i] < Rmin)
        {
            Rmin = R[i];
        }
    }

    int ans;

    if (Lmax <= Rmin)
    {
        ans = Rmin - Lmax + 1;
    }
    else
    {
        ans = 0;
    }

    cout << ans << endl;

    return 0;
}