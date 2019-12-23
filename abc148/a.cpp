#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
    int A, B;

    cin >> A >> B;

    bool flg[3] = {false};

    flg[A - 1] = true;
    flg[B - 1] = true;

    for (int i = 0; i < 3; i++)
    {
        if (flg[i] == false)
        {
            cout << i + 1 << endl;
        }
    }

    return 0;
}