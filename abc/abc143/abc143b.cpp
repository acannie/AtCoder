#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long int N;

	cin >> N;

	long long int d[N];

	for (long long int i = 0; i < N; i++)
	{
		cin >> d[i];
	}

	long long int ans = 0;

	for (long long int i = 0; i < N; i++)
	{
		for (long long int j = i + 1; j < N; j++)
		{
			ans += d[i] * d[j];
		}
	}

	cout << ans << endl;

	return 0;
}
