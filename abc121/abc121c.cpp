#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int N, M;

    cin >> N >> M;

    int A[N], B[N];

    for (int i = 0; i < N; i++)
    {
        cin >> A[i] >> B[i];
    }

    sort(A, A + N);

    for(int i = 0; i < N; i++)
    {
        B[i] = B[]
    }
    

    int ans = 0;
    int store = 0;

    for (int i = 0; i < M; i++)
    {
        if (B[store] == 0)
        {
            store++;
        }
        ans = ans + A[store];
        B[store]--;
    }

    cout << ans << endl;

    return 0;
}