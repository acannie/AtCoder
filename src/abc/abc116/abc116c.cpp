#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;

	cin >> N;

	int h[N];
	int hmax = 0;

	for (int i = 0; i < N; i++)
	{
		cin >> h[i];

		if (h[i] > hmax)
		{
			hmax = h[i];
		}
	}

	int count = 0;

	for (int i = hmax; i > 0; i--)
	{
		bool flg = false;

		for (int j = 0; j < N; j++)
		{
			if (h[j] == i)
			{
				if (flg == false)
				{
					flg = true;
					count++;
				}

				h[j]--;
			}
			else
			{
				flg = false;
			}
		}
	}

	cout << count << endl;

	return 0;
}
