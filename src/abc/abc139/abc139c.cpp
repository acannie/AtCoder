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

	int countbuf = 0;
	int countmax = 0;

	for (int i = 1; i < N; i++)
	{
		if (H[i] >= H[i + 1])
		{
			countbuf++;

			if (countbuf > countmax)
			{
				countmax = countbuf;
			}
		}
		else
		{
			countbuf = 0;
		}
	}

	cout << countmax << endl;

	return 0;
}
