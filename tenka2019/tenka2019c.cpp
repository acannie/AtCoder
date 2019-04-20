#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    int N;
    string S;

    cin >> N >> S;

    int count = 0;
    int start = N;

    for (int i = 0; i < N; i++)
    {
        if (S[i] == '#')
        {
            start = i;
            break;
        }
    }

    for (int i = start; i < N; i++)
    {
        if (S[i] == '.')
        {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}