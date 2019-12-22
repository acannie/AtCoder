#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
    int N;
    string S;

    cin >> N;
    cin >> S;

    if (N % 2 == 0)
    {
        string S1, S2;

        for (int i = 0; i < N / 2; i++)
        {
            S1 += S[i];
        }

        for (int i = N / 2; i < N; i++)
        {
            S2 += S[i];
        }

        if (S1 == S2)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}