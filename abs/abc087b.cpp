#include <iostream>
using namespace std;

int main()
{
    int A, B, C;
    int X;

    cin >> A; // 500 yen
    cin >> B; // 100 yen
    cin >> C; // 50 yen
    cin >> X;

    int Amax = X / 500;
    int Bmax = X / 100;
    int Cmax = X / 50;

    if(A < Amax){
        Amax = A;
    }
    if(B < Bmax){
        Bmax = B;
    }
    if(C < Cmax){
        Cmax = C;
    }

    int count = 0;

    for (int a = 0; a <= Amax; a++)
    {
        for (int b = 0; b <= Bmax; b++)
        {
            for (int c = 0; c <= Cmax; c++)
            {
                int sum = 500 * a + 100 * b + 50 * c;
                if (sum == X)
                {
                    count++;
                }
            }
        }
    }

    cout << count;

    return 0;
}