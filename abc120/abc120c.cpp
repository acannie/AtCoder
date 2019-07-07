#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    string S;

    cin >> S;

    int N = S.length();

    int red = 0;
    int blue = 0;

    for (int i = 0; i < N; i++)
    {
        if (S[i] == '0')
        {
            red++;
        }
        else
        {
            blue++;
        }
    }

    int ans = min(red, blue) * 2;

    cout << ans << endl;

    return 0;
}