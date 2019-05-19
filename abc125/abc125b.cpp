#include <iostream>
#include <string>
using namespace std;

int main()
{
    int N;

    cin >> N;

    int V[N + 1];
    int C[N + 1];

    for (int i = 1; i <= N; i++)
    {
        cin >> V[i];
    }
    for (int i = 1; i <= N; i++)
    {
        cin >> C[i];
    }

    int get[N + 1]; //X-Y
    int ans = 0;

    for (int i = 1; i <= N; i++)
    {
        get[i] = V[i] - C[i];
        if (get[i] > 0)
        {
            ans = ans + get[i];
        }
    }

    cout << ans << endl;

    return 0;
}