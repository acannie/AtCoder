#include <bits/stdc++.h>
using namespace std;

std::string solve()
{
    int N;
    long long int M;
    long long int V, P;

    cin >> N >> M >> V >> P;

    long long int A[N];

    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    sort(A, A + N);

    long long int ans = 0;
    long long int key = N - P; // index of the P-th largest.

    ans += N - key;

    long long int cuml[N + 1];

    cuml[0] = 0;
    for (int i = 0; i < N; i++)
    {
        cuml[i + 1] = cuml[i] + A[i];
    }

    for (long long int i = 0; i < key; i++)
    {
        long long int score_i = A[i] + M; // i問目の点数の最大限

        if (score_i < A[key])
            continue; // どれだけ頑張っても、A[key] に到達できないので、大きいものに入らない

        if (V < P)
        {
            ans++;
            continue;
        }

        long long int needToVote = M * V;

        long long int canVoteSum = 0;

        canVoteSum += (P - 1) * M; //高い方から
        canVoteSum += (i + 1) * M; //低い方から

        canVoteSum += (key - i) * score_i - (cuml[key + 1] - cuml[i + 1]);
        if (needToVote <= canVoteSum)
            ans++; // all votes are consumed.
    }
    return to_string(ans);
}

int main()
{
    cout << solve() << endl;

    return 0;
}
