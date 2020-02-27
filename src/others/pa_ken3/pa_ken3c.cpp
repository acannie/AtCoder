#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M;

    cin >> N >> M;

    long long int A[N][M];

    for (int student = 0; student < N; student++)
    {
        for (int music = 0; music < M; music++)
        {
            cin >> A[student][music];
        }
    }

    long long int sumMusicScore[M][M] = {};
    long long int max_score = 0;

    for (int T1 = 0; T1 < M; T1++)
    {
        for (int T2 = T1; T2 < M; T2++)
        {
            for (int person = 0; person < N; person++)
            {
                sumMusicScore[T1][T2] += max(A[person][T1], A[person][T2]);
            }

            if(sumMusicScore[T1][T2]>max_score){
                max_score = sumMusicScore[T1][T2];
            }
        }
    }
    
    cout << max_score << endl;

    return 0;
}