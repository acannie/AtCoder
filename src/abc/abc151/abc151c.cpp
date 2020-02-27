#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int N, M;

    cin >> N >> M;

    long long int p[M];
    string S[M];

    for (long long int i = 0; i < M; i++)
    {
        cin >> p[i] >> S[i];
    }

    long long int pena[N] = {0};
    long long int correct = 0;
    bool ACflg[N] = {false};

    for (int i = 0; i < M; i++)
    {
        if (S[i] == "WA" && ACflg[p[i] - 1] == false)
        {
            pena[p[i]-1]++;
        }
        else if (S[i] == "AC" && ACflg[p[i] - 1] == false)
        {
            correct++;
            ACflg[p[i] - 1] =true;
        }
    }

    long long int pena_sum = 0;

    for (int i = 0; i < N; i++)
    {
        if (ACflg[i] == true)
        {
            pena_sum += pena[i];
        }
    }

    cout << correct << " " << pena_sum << endl;

    return 0;
}
