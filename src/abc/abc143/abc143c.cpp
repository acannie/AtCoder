#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	string S;

	cin >> N >> S;

	int ans = 1;

	for (int i = 1; i < N; i++)
	{
		if (S[i] != S[i - 1])
		{
			ans++;
		}
	}

	cout << ans << endl;

	return 0;
}
