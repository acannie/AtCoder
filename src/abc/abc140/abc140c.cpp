#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	int N;

	cin >> N;

	int B[N];

	for (int i = 1; i <= N - 1; i++)
	{
		cin >> B[i];
	}

	long long int A[N + 1];

	A[1] = B[1];

	for (int i = 2; i <= N - 1; i++)
	{
		if (B[i - 1] < B[i])
		{
			A[i] = B[i - 1];
		}
		else
		{
			A[i] = B[i];
		}
	}

	A[N] = B[N - 1];

	long long int Asum = 0;

	for (int i = 1; i <= N; i++)
	{
		Asum += A[i];
	}

	cout << Asum << endl;

	return 0;
}
