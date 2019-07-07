#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    int N, K;

    cin >> N >> K;

    //long double possibility[N + 1];

    double ans = 0;

    for (int i = 1; i <= N; i++)
    {
        int point = i;
        //int count = 0;
        double tmp = 1.0 / N;

        while (point < K)
        {
            point *= 2;
            //count++;
            tmp /= 2;
        }
        //possibility[i] = pow(0.5, count) / N;
        //ans = ans + possibility[i];
        ans += tmp;
    }

    cout << setprecision(12) << ans << endl;

    return 0;
}