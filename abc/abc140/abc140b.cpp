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
	int B[N + 1];
	int C[N];

	for (int i = 1; i <= N; i++)
	{
		cin >> A[i];
	}
	for (int i = 1; i <= N; i++)
	{
		cin >> B[i];
	}
	for (int i = 1; i <= N - 1; i++)
	{
		cin >> C[i];
	}

	/* 計算 */
	int manzoku = 0;

	for (int i = 1; i <= N; i++)
	{
		int buf1 = A[i];
		manzoku += B[buf1];

		if (A[i] == A[i - 1] + 1 && i != 1)
		{
			int buf2 = A[i - 1];
			manzoku += C[buf2];
		}
	}

	cout << manzoku << endl;

	return 0;
}
