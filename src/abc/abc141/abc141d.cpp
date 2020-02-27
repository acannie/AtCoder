#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M;

    cin >> N >> M;

    priority_queue<int> q;

    for (int i = 0; i < N; i++)
    {
        int a;
        cin >> a;
        q.push(a);
    }

    for (int i = 0; i < M; i++)
    {
        // find the max
        int max = q.top();
        q.pop();
        q.push(max / 2);
    }

    long long int ans = 0;

    while (!q.empty())
    {
        ans += q.top();
        q.pop();
    }

    /*
    for (int i = 0; i < N; i++)
    {
        ans += q.top();
        q.pop();
    }
    */

    cout << ans << endl;

    return 0;
}
