#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int N;

    cin >> N;

    int W[N + 1];
    for (int i = 1; i <= N; i++)
    {
        cin >> W[i];
    }

    int min = 100 * 100;
    int sa;

    for (int T = 1; T < N; T++)
    {
        int S1 = 0;
        int S2 = 0;

        for (int i = 1; i <= T; i++)
        {
            S1 += W[i];
        }
        for (int j = T + 1; j <= N; j++)
        {
            S2 += W[j];
        }

        sa = abs(S1 - S2);
        if (sa < min)
        {
            min = sa;
        }
    }

    cout << min << endl;

    return 0;
}