#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
    int N;
    string S, T;

    cin >> N;
    cin >> S >> T;

    string ans;

    for (int i = 0; i < N; i++)
    {
        ans += S[i];
        ans += T[i];
    }

    cout << ans << endl;

    return 0;
}