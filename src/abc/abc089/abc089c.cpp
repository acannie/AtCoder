#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;

	cin >> N;

	string S[N];

	for (int i = 0; i < N; i++)
	{
		cin >> S[i];
	}

	int MARCHcount[5] = {};

	for (int i = 0; i < N; i++)
	{
		if (S[i][0] == 'M')
		{
			MARCHcount[0]++;
		}
		else if (S[i][0] == 'A')
		{
			MARCHcount[1]++;
		}
		else if (S[i][0] == 'R')
		{
			MARCHcount[2]++;
			;
		}
		else if (S[i][0] == 'C')
		{
			MARCHcount[3]++;
		}
		else if (S[i][0] == 'H')
		{
			MARCHcount[4]++;
		}
	}

	long long int ans = 0;

	for (int i = 0; i < 5; i++)
	{
		for (int j = i + 1; j < 5; j++)
		{
			for (int k = j + 1; k < 5; k++)
			{
				ans += (long long int)MARCHcount[i] * (long long int)MARCHcount[j] * (long long int)MARCHcount[k];
			}
		}
	}

	cout << ans << endl;

	return 0;
}
