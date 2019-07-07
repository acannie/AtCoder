#include <iostream>
#include <string>
using namespace std;

int main()
{
    int A, B, C;

    cin >> A >> B >> C;

    int listen = 0;

    while (1)
    {
        if (listen == C)
        {
            break;
        }

        if (B >= A)
        {
            listen++;
            B = B - A;
        }
        else
        {
            break;
        }
    }

    cout << listen << endl;

    return 0;
}