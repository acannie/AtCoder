#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string S;
    cin >> S;

    if((S[0]==S[1])&&(S[1]==S[2])&&(S[2]==S[3])){
        cout << "No" << endl;
        return 0;
    }

    if (S[0] != S[1])
    {
        if (((S[0] == S[2]) && (S[1] == S[3])) || ((S[0] == S[3]) && (S[1] == S[2])))
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    else
    {
        if (S[2] == S[3])
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}