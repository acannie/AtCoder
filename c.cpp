#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
    int N;

    cin >> N;

    int x[N], y[N];

    for (int i = 0; i < N; i++)
    {
        cin >> x[i] >> y[i];
    }

    int array[N];

    for (int i = 0; i < N; i++)
    {
        array[i] = i;
    }

    double avesum = 0;

    do
    {
        double sum = 0;

        for (int i = 0; i < N - 1; i++)
        {
            sum += sqrt(pow(x[array[i]] - x[array[i + 1]], 2) + pow(y[array[i]] - y[array[i + 1]], 2));
        }
        avesum += sum;
    } while (next_permutation(array, array + N));

    int N_dash = 1;

    for (int i = 1; i <= N; i++)
    {
        N_dash *= i;
    }

    // for (int i = 0; i < N; i++)
    // {
    //     for (int j = i + 1; j < N; j++)
    //     {
    //         avesum += sqrt(pow(x[i] - x[j], 2) + pow(y[i] - y[j], 2));
    //     }
    // }

    double ans = (double)avesum / (double)N_dash;

    
    printf("%.16f", ans);

    return 0;
}