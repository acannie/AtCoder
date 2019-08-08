#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	int N;

	cin >> N;

	int H[N + 1];

	for (int i = 1; i <= N; i++)
	{
		cin >> H[i];
	}

	if (N == 1)
	{
		cout << "Yes" << endl;
		return 0;
	}
	else
	{
		for (int i = N; i > 1; i--)
		{
			if (H[i - 1] > H[i])
			{
				H[i - 1] = H[i - 1] - 1;

				if (!(H[i - 1] <= H[i]))
				{
					cout << "No" << endl;
					return 0;
				}
			}
		}

		cout << "Yes" << endl;

		return 0;
	}
}
