#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int a[N];
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }

    int Alice = 0;
    int Bob = 0;

    bool turn = true; // true is Alice's turn

    int count;
    for (count = 0; count < N; count++)
    {
        int amax = 0;
        int imax = 0;

        // challenge to sort initially!

        int i;
        for (i = 0; i < N - count; i++)
        {
            if (a[i] > amax)
            {
                amax = a[i];
                imax = i;
            }
        }

        int tmp;
        tmp = a[imax];
        a[imax] = a[N - count - 1];
        a[N - count - 1] = tmp;

        /*
        // sorting
        for (int j = imax + 1; j < N - count; j++)
        {
            a[j - 1] = a[j];
        }
        */

        // Alice's turn
        if (turn == true)
        {
            Alice += amax;
            turn = false;
        }
        else // Bob's turn
        {
            Bob += amax;
            turn = true;
        }
    }

    int difference = Alice - Bob;

    cout << difference << endl;

    return 0;
}
