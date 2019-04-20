#include <iostream>
using namespace std;

int main()
{
    int a[5];
    int k;

    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }

    cin >> k;

    int distance;
    bool flg = true;

    int i, j;
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {

            distance = a[j] - a[i];

            if (distance > k)
            {
                flg = false;
            }
        }
    }

    if (flg == true)
    {
        cout << "Yay!" << endl;
    }
    else
    {
        cout << ":(" << endl;
    }

    return 0;
}