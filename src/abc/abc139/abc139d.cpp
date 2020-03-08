#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	long long int N;

	cin >> N;

	long long int ans;

	if (N == 1)
	{
		ans = 0;
	}
	else if ((N - 1) % 2 == 0)
	{
		ans = N * (N - 1) / 2;
	}
	else
	{
		ans = N * ((N - 1) / 2) + N / 2;
	}

	cout << ans << endl;

	return 0;
}
