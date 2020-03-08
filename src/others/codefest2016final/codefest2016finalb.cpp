#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long int N;

	cin >> N;

	int min_sum = 0;
	int min_max = 1;

	while (1)
	{
		if (min_sum + min_max > N)
		{
			min_sum += min_max;
			break;
		}

		min_sum += min_max;
		min_max++;
	}

	int remove = min_sum -N;

	for (int i = 1; i <= min_max; i++)
	{
		if (i != remove)
		{
			cout << i << endl;
		}
	}

	return 0;
}
