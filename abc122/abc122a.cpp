#include <iostream>
#include <string>
using namespace std;

int main()
{
    string S;

    cin >> S;

    if (S[0] == 'A')
    {
        cout << 'T' << endl;
    }
    else if (S[0] == 'T')
    {
        cout << 'A' << endl;
    }
    else if (S[0] == 'C')
    {
        cout << 'G' << endl;
    }
    else
    {
        cout << 'C' << endl;
    }

    return 0;
}