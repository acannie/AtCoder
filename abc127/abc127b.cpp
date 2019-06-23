#include <iostream>
using namespace std;

int main()
{
    int r, D;

    cin >> r >> D;

    int x[11];

    cin >> x[0];

    for (int i = 0; i < 10; i++)
    {
        x[i + 1] = r * x[i] - D;
        cout << x[i + 1] << endl;
    }

    return 0;
}