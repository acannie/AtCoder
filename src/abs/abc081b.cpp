#include <iostream>
using namespace std;

int main()
{
    int N;

    cin >> N;

    int A[N];

    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    int count = 0;

    for (count;; count++)
    {
        bool flg = false; // to end
        for (int i = 0; i < N; i++)
        {
            if (A[i] % 2 == 0)
            {
                // OK
                A[i] = A[i] / 2;
            }
            else
            {
                // NG
                flg = true;
            }
        }
        if (flg == true)
        {
            break;
        }
    }

    cout << count << endl;

    return 0;
}
