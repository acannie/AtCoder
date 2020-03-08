#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    if ((a % 2 == 0) || (b % 2 == 0))
    {
        cout << "Even";
    }
    else // otherwise (a % 2 == 1) && (b % 2 == 1)
    {
        cout << "Odd";
    }

    return 0;
}