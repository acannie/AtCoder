#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	int N;

	cin >> N;

	int A[N + 1];

	for (int i = 1; i <= N; i++)
	{
		cin >> A[i];
	}

	int max = pow(10, -4);
	int imax;

	for (int i = 1; i <= N; i++)
	{
		if (A[i] > max)
		{
			max = A[i];
			imax = i;
		}
	}

	for (int i = imax; i <= N - 1; i++)
	{
		A[i] = A[i + 1];
	}

	sort(A + 1, A + N);

	int small = A[1] - A[N - 1];

	for (int i = 2; i <= N - 2; i++)
	{
		small -= A[i];
	}

	int ans = max - small;

	cout << ans << endl;

	cout << A[1] << A[N - 1] << endl;

	int aaa = A[1] - A[N - 1];

	cout << aaa << A[N-2] << endl;

	for (int i = N - 1; i >= 2; i--)
	{
		cout << aaa-A[i] << A[N-i] << endl;
	}

	return 0;
}
