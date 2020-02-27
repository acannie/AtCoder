#include <iostream>
using namespace std;

int main()
{
    string a;

    int i = 3;
    int count;

    cin >> a;
    for (int j = 0; j < i; j++)
    {

        if (a[j] == '1')
        {
            count++;
        }
    }

    cout << count;

    return 0;
}