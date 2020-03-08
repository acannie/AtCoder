#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	int N;

	cin >> N;

	int A[N];

	for (int i = 1; i <= N; i++)
	{
		cin >> A[i];
	}

	int max1 = 0;
	int max2 = 0;

	int max1memo;
	int max2memo;

	for (int i = 1; i <= N; i++)
	{
		if (max1 < A[i])
		{
			max2 = max1;
			max1 = A[i];
			max1memo = i;
		}
		else if (max2 < A[i])
		{
			max2 = A[i];
			max2memo = i;
		}
	}

	for (int i = 1; i <= N; i++)
	{
		if (i != max1memo)
		{
			cout << A[max1memo] << endl;
		}
		else
		{
			cout << A[max2memo] << endl;
		}
	}

	/* 
	int Lmax = 0;
	int Rmax = 0;

	int Limemo;
	int Rimemo;

	for (int i = 2; i <= N; i++)
	{
		if (A[i] >= Rmax)
		{
			Rmax = A[i];
			Rimemo = i;
		}
	}
	
	cout << Rmax << endl;

	for (int i = 2; i <= N; i++)
	{
		if (A[i - 1] > Lmax)
		{
			Lmax = A[i - 1];
			Limemo = i;
		}

		if (A[i + 1] >)
		{
		}

		cout << max(A[Limemo], A[Rimemo]) << endl;
	}
	*/

	return 0;
}
