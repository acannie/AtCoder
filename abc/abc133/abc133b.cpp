#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

bool calc(int n)
{
	bool flg;

	int a = (int)sqrt((double)n);
	if (a * a == n)
	{
		flg = true;
	}
	else
	{
		flg = false;
	}

	/*for (int i = 1; i <= n; i++)
	{
		if ((n/i) == n)
		{
			flg = true;
		}
		
	}*/

	return flg;
}

int main()
{
	int N, D;
	cin >> N >> D;

	int X[N + 1][D + 1];

	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= D; j++)
		{
			cin >> X[i][j];
		}
	}

	int count = 0;

	for (int point1 = 1; point1 <= N; point1++)
	{
		for (int point2 = point1 + 1; point2 <= N; point2++)
		{
			int ans = 0;

			for (int k = 1; k <= D; k++)
			{
				ans += pow(X[point1][k] - X[point2][k], 2);
			}

			if (calc(ans) == true)
			{
				count++;
			}
		}
	}

	cout << count << endl;

	return 0;
}
