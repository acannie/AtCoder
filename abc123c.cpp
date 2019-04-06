#include <iostream>
using namespace std;

int main()
{
    int N;
    int A, B, C, D, E;

    cin >> N;
    cin >> A, B, C, D, E;

    int Toshi[7];

    int count = 0;

    Toshi[1] = N;

    while (1)
    {

        if (A >= Toshi[1])
        { //定員が十分であるとき
            Toshi[2] = Toshi[2] + Toshi[1];
            Toshi[1] = 0;
        }
        else
        {
            Toshi[2] = Toshi[2] + A;
            Toshi[1] = N - A;
        }

        if (B >= Toshi[2])
        { //定員が十分であるとき
            Toshi[3] = Toshi[3] + Toshi[2];
            Toshi[2] = 0;
        }
        else
        {
            Toshi[2] = Toshi[2] + A;
            Toshi[1] = N - A;
        }

        count++;
    }

    return 0;
}