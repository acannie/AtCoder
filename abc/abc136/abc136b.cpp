#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	int N;

	cin >> N;

	int num = N;
	int count = 0;

	while (num > 0)
	{
		num = num / 10;
		count++; //count桁
	}

	int ans = 0;

	if (count % 2 == 0)
	{
		while (count >= 0)
		{
			if (count % 2 == 1)
			{
				ans += 9 * pow(10, count - 1);
			}
			count--;
		}
	}
	else
	{
		int buf = N - pow(10, count - 1) + 1;

		count = count - 1;

		while (count > 0)
		{
			if (count % 2 == 1)
			{
				ans += 9 * pow(10, count - 1);
			}
			count--;
		}

		ans += buf;
	}

	cout << ans << endl;

	return 0;
}
