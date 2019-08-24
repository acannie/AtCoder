#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	int N;
	long long int K;

	cin >> N >> K;

	K = K % (long long int)(pow(10, 9) + 7);

	int A[N];
	int Abuf[N];

	for (int i = 0; i < N; i++)
	{
		cin >> A[i];
		Abuf[i] = A[i];
	}

	int tentoA = 0;

	for (int i = 0; i < N - 1; i++)
	{
		if (A[i] > A[i + 1])
		{
			tentoA++;
		}
	}

	sort(Abuf, Abuf + N);

	int Abufcount1 = 0;
	int equalcount = 0;

	for (int i = 1; i < N; i++)
	{
		if (Abuf[i - 1] == Abuf[i])
		{
			equalcount++;
		}
		else if (Abuf[i - 1] < Abuf[i])
		{
			Abufcount1 += i - equalcount;
			equalcount = 0;
		}
	}

	long long int Abufcount2 = 0;

	long long int I;

	if ((K - 1) % 2 == 0)
	{
		I = K * ((K - 1) / 2);
	}
	else
	{
		I = K * ((K - 1) / 2) + K / 2;
	}

	/*
	for (long long int i = K - 1; i > 0; i--)
	{
		Abufcount2 += i * Abufcount1;
	}
*/

	long long int ans1 = tentoA * K % (long long int)(pow(10, 9) + 7);
	long long int ans2 = I * Abufcount1 % (long long int)(pow(10, 9) + 7);

	long long int ans = ans1 + ans2;

	cout << ans << endl;

	return 0;
}
