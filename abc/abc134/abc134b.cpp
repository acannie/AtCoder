#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	int N, D;

	cin >> N >> D;

	int ans;
	if (N % (D * 2 + 1) == 0)
	{
		ans = N / (D * 2 + 1);
	}
	else
	{
		ans = N / (D * 2 + 1) + 1;
	}

	cout << ans << endl;

	return 0;
}
