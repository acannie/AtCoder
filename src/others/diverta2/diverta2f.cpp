#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	int N, K;

	cin >> N >> K;

	int ans;

	if (K = 1)
	{
		ans = 0;
	}
	else
	{

		int big = N - K + 1;
		int small = 1;
		ans = big - small;
	}
	cout << ans << endl;

	return 0;
}
