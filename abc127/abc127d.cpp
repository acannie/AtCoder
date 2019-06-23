#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    int N, M;

    cin >> N >> M;

    int A[N + 1];

    for (int i = 1; i <= N; i++)
    {
        cin >> A[i];
    }

    int B[M + 1], C[M + 1];

    for (int i = 1; i <= M; i++)
    {
        cin >> B[i] >> C[i];
    }

    /*

    for (int j = 1; j <= M; j++)
    {
        cin >> B[j] >> C[j];

        sort(A + 1, A + N + 1);

        int Amax = 0;
        int Amin = pow(10, 5);

        for (int i = 1; i <= B[j]; i++)
        {
            if (A[i] <= C[j])
            {
                A[i] = C[j];
            }
        }
    }

    */
    int factor = 0;
    for (int i = 1; i <= M; i++)
    {
        factor += B[i];
    }

    int newA[N + factor];

    for (int i = 0; i < N; i++)
    {
        newA[i] = A[i + 1];
    }

    int a = 0;
    int count = 0;
    for (int i = 1; i <= M; i++)
    {
        for (int j = 0; j < B[i]; j++)
        {
            newA[N + count] = C[a + 1];
            count++;
        }
        a++;
    }

    sort(newA, newA + N + factor);

    long long int ans = 0;

    for (int i = 0; i < N; i++)
    {
        ans += newA[N + factor - 1 - i];
    }

    cout << ans << endl;

    return 0;
}
