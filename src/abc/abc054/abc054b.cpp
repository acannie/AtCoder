#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
	int N, M;

	cin >> N >> M;

	string A[N];
	string B[M];

	for (int i = 0; i < N; i++)
	{
		cin >> A[i];
	}
	for (int i = 0; i < M; i++)
	{
		cin >> B[i];
	}

	for (int istart = 0; istart < N - M+1; istart++)
	{
		for (int jstart = 0; jstart < N - M+1; jstart++)
		{
			bool flg = true;

			for (int i = 0; i < M; i++)
			{
				for (int j = 0; j < M; j++)
				{
					if (A[istart + i][jstart + j] != B[i][j])
					{
						flg = false;
					}
				}
			}

			if (flg == true)
			{
				cout << "Yes" << endl;
				return 0;
			}
		}
	}

	cout << "No" << endl;

	return 0;
}
