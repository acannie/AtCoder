#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int N;

    cin >> N;

    int d[N];

    for (int i = 0; i < N; i++)
    {
        cin >> d[i];
    }

    sort(d, d + N);

    int i_small = N / 2 - 1;
    int i_big = N / 2;

    if (d[i_small] == d[i_big])
    {
        cout << "0" << endl;
    }
    else
    {
        int Ksel;
        Ksel = d[i_big] - d[i_small];
        cout << Ksel << endl;
    }

    return 0;
    /* 
    for (int i = i_small - 1; i >= 0; i--)
    {
        if (i == i_small)
        {
            i_small = i;
        }
        else
        {
            break;
        }
    }

    for (int i = i_big + 1; i < N; i++)
    {
        if (i == i_big)
        {
            i_big = i;
        }
        else
        {
            break;
        }
    }
*/
}