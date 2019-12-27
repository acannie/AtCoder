#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;

    cin >> N;

    string S[N];

    int white_vote = 0;
    int black_vote = 0;

    for (int i = 0; i < N; i++)
    {
        cin >> S[i];
        if (S[i] == "white")
        {
            white_vote++;
        }
        else
        {
            black_vote++;
        }
    }

    if (white_vote > black_vote)
    {
        cout << "white" << endl;
    }
    else
    {
        cout << "black" << endl;
    }

    return 0;
}