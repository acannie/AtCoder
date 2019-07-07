#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>
using namespace std;

int main()
{
    int N;

    cin >> N;

    string S[N + 1];
    int P[N + 1];

    for (int i = 1; i <= N; i++)
    {
        cin >> S[i] >> P[i];
    }

    strcmp(S.begin()+ 1, S.end());

    for (int i = 1; i <= N; i++)
    {
        cout << S[i] << endl;
    }

    return 0;
}