#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int d[N];
    cin >> d[N];

    int Xnumber[N];
    Xnumber[N] = {0};

    int X = 0;

    for (int i = 0; i < N; i++)
    {
        bool isKnownNumber;
        for (int j = 0; j < i; j++)
        {
            if (d[i] == Xnumber[j])
            {
                Xnumber[i] = 0;
                isKnownNumber = true;
                break;
            }
            Xnumber[i] = d[i];
            isKnownNumber = false;
        }

        if (isKnownNumber == false)
        {
            X++;
        }
    }

    cout << X << endl;

    return 0;
}