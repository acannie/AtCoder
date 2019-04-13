#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    string S;

    cin >> S;

    int countA = 0;
    int countB = 0;

    for (int i = 0; i < S.length(); i++)
    {
        if (((i % 2 == 0) && (S[i] == '1')) || ((i % 2 == 1) && (S[i] == '0')))
        {
            countA++;
        }

        if (((i % 2 == 0) && (S[i] == '0')) || ((i % 2 == 1) && (S[i] == '1')))
        {
            countB++;
        }
        
    }

    if (countA > countB)
    {
        cout << countB << endl;
    }
    else
    {
        cout << countA << endl;
    }

    return 0;
}