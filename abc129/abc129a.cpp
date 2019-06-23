#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int P, Q, R;

    cin >> P >> Q >> R;

    int max = 0;

    if (P > max)
    {
        max = P;
    }
    if (Q > max)
    {
        max = Q;
    }
    if (R > max)
    {
        max = R;
    }

    int time = P + Q + R - max;

    cout << time << endl;

    return 0;
}