#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	int N, K;

	cin >> N >> K;

	int a[N + 1];

	for (int i = 1; i <= N; i++)
	{
		cin >> a[i];
	}

	int count = 0;

	/*
	for (int i = 1; i <= N; i++)
	{
		int sum = a[i];

		for (int j = i + 1; j <= N + 1; j++)
		{
			if (sum >= K)
			{
				count = count + (N - j + 2);
				break;
			}

			sum += a[j];
		}
	}
	*/

	int sum = a[1];

	for (int i = 2; i <= N; i++)
	{
		sum += a[i];
		if (sum >= K)
		{
			break;
		}
	}

	a[0] = 0;

	for (int i = 2; i <= N; i++)
	{
		sum = sum - a[i - 1];

		if (sum >= K)
		{
			count = count + (N - i -1);
		}

		sum -= a[i];
	}

	cout << count << endl;

	return 0;
}
