#include <bits/stdc++.h>
using namespace std;

int main()
{
	double N;

	cin >> N;

	double ans;

	if ((int)N % 2 == 0)
	{
		ans = (double)1 / 2;
	}
	else
	{
		ans = ((int)N / 2 + 1) / N;
	}

	cout << ans << endl;

	return 0;
}
