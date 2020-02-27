#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
	if (a < b)
	{
		int tmp = a;
		a = b;
		b = tmp;
	}

	int k = b % a;

	while (k != 0)
	{
		b = a;
		a = k;
		k = b % a;
	}

	return a;
}

int lcm(int a, int b)
{
}

int main()
{
	int N;

	cin >> N;

	long long int T[N];

	for (int i = 0; i < N; i++)
	{
		cin >> T[i];
	}

	int ans;

	cout << ans << endl;

	return 0;
}
