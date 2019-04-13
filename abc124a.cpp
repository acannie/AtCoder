#include <iostream>
using namespace std;

int main()
{
    int A, B;

    cin >> A >> B;

    int coin;

    if (A > B)
    {
        coin = A * 2 - 1;
    }
    else if (A < B)
    {
        coin = B * 2 - 1;
    }
    else
    {
        coin = A * 2;
    }

    cout << coin << endl;

    return 0;
}