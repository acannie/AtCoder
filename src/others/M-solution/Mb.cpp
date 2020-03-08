#include <iostream>
#include <string>
using namespace std;

int main()
{
    string S;
    cin >> S;

    int o_num = 0;

    for (int i = 0; i < S.length(); i++)
    {
        if (S[i] == 'o')
        {
            o_num++;
        }
    }

    if ((15 - S.length() + o_num) >= 8)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}