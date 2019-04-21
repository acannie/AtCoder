#include <iostream>
using namespace std;

int main()
{
    int N, M, C;

    cin >> N >> M >> C;

    int B[M + 1];
    int A[N + 1][M + 1];

    for (int i = 1; i <= M; i++)
    {
        cin >> B[i];
    }

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= M; j++)
        {
            cin >> A[i][j];
        }
    }

    int source;
    int count = 0;
    for (int i = 1; i <= N; i++)
    {
        source = C;
        for (int j = 1; j <= M; j++)
        {
            source = source + A[i][j] * B[j];
        }
        if (source > 0)
        {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}