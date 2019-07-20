#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	int N;

	cin >> N;

	int a[N + 1];

	for (int i = 1; i <= N; i++)
	{
		cin >> a[i];
	}

	int b[N + 1];
	int M = 0;
	/* bool done[N + 1]; */

	for (int i = N; i >= 1; i--)
	{
		int b_sum = 0;
		for (int j = 2 * i; j <= N; j += i)
		{
			b_sum += b[j];
		}

		int b_amari = b_sum % 2;

		if (((b_amari == 1) && (a[i] == 1)) || ((b_amari == 0) && (a[i] == 0)))
		{
			b[i] = 0;
		}
		else
		{
			b[i] = 1;
			M++;
		}
	}

	cout << M << endl;

	for (int i = 1; i <= N; i++)
	{
		if (b[i] == 1)
		{
			cout << i << endl;
		}
	}

	return 0;
}
