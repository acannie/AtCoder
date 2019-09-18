#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N, M;

	cin >> N >> M;

	int X[M];

	for (int i = 0; i < M; i++)
	{
		cin >> X[i];
	}

	sort(X, X + M);

	int distance[M - 1];

	for (int i = 0; i < M - 1; i++)
	{
		distance[i] = X[i + 1] - X[i];
	}

	sort(distance, distance + M - 1);

	int ans = 0;

	for (int i = 0; i < M - 1 - (N - 1); i++)
	{
		ans += distance[i];
	}

	cout << ans << endl;

	return 0;
}
