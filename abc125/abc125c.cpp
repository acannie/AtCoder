#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int N;

    cin >> N;

    int A[N + 1];

    long Amin = pow(10, 9);
    long Amax = 0;

    for (int i = 1; i <= N; i++)
    {
        cin >> A[i];
        if (A[i] < Amin)
        {
            Amin = A[i];
        }
        if (A[i] > Amax)
        {
            Amax = A[i];
        }
    }

    int sosu[Amax];
    int k = 0;

    for (int i = 2; i <= Amax; i++)
    {
        bool flag = true;
        for (int j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                flag = false;
                break;
            }
        }
        if (flag == true)
        {
            sosu[k] = i;
            k++;
        }
        
    }
    int kmax = k-1;
/*
    cout << kmax << endl;

    for (int i = 1; i <= kmax; i++)
    {
        cout << sosu[i] << ' ';
    }
*/

    bool jbool;
    int buf;
    int max = 0;

    for (int k = 1; k <= N; k++)
    {
        int gcd = 1;

        buf = A[k];
        A[k] = 0;

        for (int j = 1; j <= kmax; j++) //gcd check
        {
            for (int i = 1; i <= N; i++)
            {
                if (A[i] % sosu[j] == 0)
                {
                    jbool = true;
                }
                else
                {
                    jbool = false;
                    break;
                }
            }
            if (jbool == true)
            {

                gcd = gcd * j;
            }
        }
        if (gcd > max)
        {
            max = gcd;
        }

        A[k] = buf;
    }

    cout << max << endl;

    return 0;
}