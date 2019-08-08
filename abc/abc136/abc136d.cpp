#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	string S;

	cin >> S;

	int N = S.length();

	int ans[N];
	int i_start, i_goal;

	for (int i = 0; i < N; i++)
	{
		if (S[i] == 'L')
		{
			ans[i] == 0;
		}
		else
		{
			i_start = i;
			break;
		}
	}

	for (int i = N - 1; i >= 0; i--)
	{
		if (S[i] == 'R')
		{
			ans[i] == 0;
		}
		else
		{
			i_goal = i;
			break;
		}
	}

	int R_count = 0;
	int L_count = 0;
	bool flg = false;

	int R_start;
	int L_start;

	for (int i = i_start; i <= i_goal; i++)
	{
		ans[i] = 0;

		if ((S[i] == 'R') && (flg == false))
		{
			R_count++;
		}
		else if (S[i] == 'L')
		{
			L_count++;

			L_start = i;

			flg = true;
		}
		else if ((S[i] == 'R') && (flg == true))
		{
			if ((R_count + L_count) % 2 == 0)
			{
				ans[L_start] = (R_count + L_count) / 2;
				ans[L_start - 1] = (R_count + L_count) / 2;
			}
			else
			{
				ans[L_start] = (R_count + L_count) / 2;
				ans[L_start - 1] = (R_count + L_count) / 2 + 1;
			}

			R_count = 0;
			L_count = 0;

			flg = true;
		}
	}

	for (int i = 0; i < N; i++)
	{
		cout << ans[i] << " " << endl;
	}

	return 0;
}
