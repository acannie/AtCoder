#include <iostream>
#include <string>
using namespace std;

int main()
{
    string S;

    cin >> S;

    int count = 0;
    int countmax = 0;

    for (int i = 0; i < S.length(); i++)
    {
        if ((S[i] == 'A') || (S[i] == 'C') || (S[i] == 'G') || (S[i] == 'T'))
        {
            count++;
            if (count > countmax)
            {
                countmax = count;
            }
        }
        else
        {
            count = 0;
        }
    }

    cout << countmax << endl;

    return 0;
}