#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int piramid(int a)
{
    a = a - 1;

    for (int i = a - 1; i > 0; i--)
    {
        a += i;
    }
    return a;
}

int main()
{
    string s;
    cin >> s;

    if (s.length() < 3)
    {
        cout << "0" << endl;
        return 0;
    }

    int count = 0;

    int i = 0;

    bool comboABC;
    int combo;

    while (i < s.length() - 2)
    {
        if ((s[i] == 'A') && (s[i + 1] == 'B') && (s[i + 2] == 'C'))
        {
            count++;

            comboABC = 1;

            for (int j = i - 1; j > 0; j--)
            {
                if (s[j] == 'A')
                {
                    count++;
                }
                else
                {
                    break;
                }
            }
            for (int j = i + 1; j < s.length() - 1; j++)
            {
                if ((s[j] == 'B') && (s[j + 1] == 'C'))
                {
                    count++;
                }
                else
                {
                    break;
                }
            }
            i = i + 3;
        }
        else
        {
            i++;
        }
    }

    cout << count << endl;

    return 0;
}