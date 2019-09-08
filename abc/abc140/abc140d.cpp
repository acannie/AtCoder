#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
	int N, K;
	string S;

	cin >> N >> K;

	cin >> S;

	bool Lflg = false;
	bool Rflg = false;

	if (S[0] == 'L')
	{
		for (int i = 0; i < N; i++)
		{
			if (S[i] == 'R')
			{
				Rflg = true;
				Lflg = false;

				S[i] = 'L';
			}
			else
			{
				if (Rflg == true)
				{
					K--;
				}

				Lflg = true;
				Rflg = false;
			}

			if (K == 0)
			{
				break;
			}
		}
	}
	else
	{
		for (int i = 0; i < N; i++)
		{
			if (S[i] == 'L')
			{
				Rflg = true;
				Lflg = false;

				S[i] = 'R';
			}
			else
			{
				if (Rflg == true)
				{
					K--;
				}

				Rflg = true;
				Lflg = false;
			}

			if (K == 0)
			{
				break;
			}
		}
	}

	int ans = 0;

	for (int i = 0; i < N - 1; i++)
	{
		if (S[i] == 'R' && S[i] == S[i + 1])
		{
			ans++;
		}
	}

	for (int i = N - 1; i > 0; i--)
	{
		if (S[i] == 'L' && S[i] == S[i - 1])
		{
			ans++;
		}
	}

	cout << ans << endl;

	return 0;
}
