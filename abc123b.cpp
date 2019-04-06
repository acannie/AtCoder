#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double A[5];
    double a[5];

    int timeMemo[5];
    int minTimeRemainder = 10;
    int imemo;

    int i;
    for (int i = 0; i < 5; i++)
    {
        cin >> A[i];

        a[i] = ceil(A[i]/10) * 10;

        timeMemo[i] = (int) A[i] % 10;
        if (timeMemo[i] == 0)
        {
            timeMemo[i] = 10;
        }
        if (timeMemo[i] < minTimeRemainder)
        {
            minTimeRemainder = timeMemo[i];
            imemo = i;
        }
    }

    int ordertime;

    for (int i = 0; i < 5; i++)
    {
        ordertime += a[i];
    }

    ordertime = ordertime - a[imemo] + A[imemo];

    cout << ordertime << endl;

    return 0;
}