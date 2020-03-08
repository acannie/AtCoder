#include <bits/stdc++.h>
using namespace std;

long long int junretsu(long long int n)
{
	long long int ans = 1;
	while (n != 0)
	{
		ans *= n;
		ans = ans % ((long long int)pow(10, 9) + 7);

		n--;
	}
	return ans;
}

int main()
{
	long long int N, M;
	cin >> N >> M;

	long long int ans;

	if (abs(N - M) > 1)
	{
		ans = 0;
	}
	else if (N == M)
	{
		ans = (junretsu(min(N, M)) * 2 * max(N, M)) % ((long long int)pow(10, 9) + 7);
		ans = ans * 2;
	}
	else
	{
		ans = junretsu(N) * junretsu(M);
	}

	cout << ans << endl;

	return 0;
}
