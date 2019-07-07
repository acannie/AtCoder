#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int N, M, K;

    cin >> N >> M >> K;

    int cost;

    int x[K + 1], y[K + 1];
    int ans = 0;

    for (int i = 1; i <= K; i++)
    {
        x[i] = i;
        y[i] = i;
    }
    

    for (int i = 1; i <= K - 1; i++)
    {
        for (int j = i+1; j <= K; j++)
        {
            cost = abs(x[i] - x[j]) + abs(y[i] - y[j]);
            ans += cost;

            if (ans >= pow(10, 9)+7)
            {
                ans = ans - (pow(10, 9)+7);
            }
        }
    }

    cout << ans << endl;

    return 0;
}