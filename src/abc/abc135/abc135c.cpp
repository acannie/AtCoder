#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	/* 代入 */

	long long int N;

	cin >> N;

	long long int A[N + 2];
	long long int B[N + 1];
	long long int A_origin[N + 2];
	long long int B_origin[N + 1];

	for (long long int i = 1; i <= N + 1; i++)
	{
		cin >> A[i];
		A_origin[i] = A[i];
	}

	for (long long int i = 1; i <= N; i++)
	{
		cin >> B[i];
		B_origin[i] = B[i];
	}

	/* 計算 */

	for (long long int i = 1; i <= N; i++)
	{
		if (A[i] >= B[i])
		{
			A[i] = A[i] - B[i];
		}
		else
		{
			if (A[i + 1] - (B[i] - A[i]) >= 0)
			{
				A[i + 1] = A[i + 1] - (B[i] - A[i]);
			}
			else
			{
				A[i + 1] = 0;
			}

			A[i] = 0;
		}
	}

	long long count = 0;

	for (long long int i = 1; i <= N + 1; i++)
	{
		count += A_origin[i] - A[i];
	}

	cout << count << endl;

	return 0;
}
