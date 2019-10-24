#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;

	cin >> N;

	int L[N];

	for (int i = 0; i < N; i++)
	{
		cin >> L[i];
	}

	sort(L, L + N);

	int ans = 0;

	for (int i = 0; i < N; i++)
	{
		for (int j = i + 1; j < N; j++)
		{
			// min
			int min = abs(L[i] - L[j]);
			int i_min;
			bool done_1[N] = {false};

			int marker = N / 2;

			while (1)
			{
				if (done_1[marker] == true)
				{
					i_min = marker;
					break;
				}

				done_1[marker] = true;

				if (L[marker] == min)
				{
					i_min = marker;
					break;
				}
				else if (L[marker] > min)
				{
					marker /= 2;
				}
				else
				{
					marker = marker / 2 + marker;
				}
			}

			for (int k = 0;; k++)
			{
				if (L[i_min + k] > min && i_min + k != i && i_min + k != j)
				{
					i_min = i_min + k;
					break;
				}
			}

			// max
			int max = L[i] + L[j];

			int i_max;

			bool done_2[N] = {false};

			marker = N / 2;

			while (1)
			{
				if (done_2[marker] == true)
				{
					i_max = marker;
					break;
				}

				done_2[marker] = true;

				if (L[marker] == max)
				{
					i_max = marker;
					break;
				}
				else if (L[marker] > max)
				{
					marker /= 2;
				}
				else
				{
					marker = marker / 2 + marker;
				}
			}

			for (int k = 0;; k++)
			{
				if (L[i_max - k] < max && i_max - k != i && i_max - k != j)
				{
					i_max = i_max - k;
					break;
				}
			}

			// sum
			if (i_max - i_min > 0)
			{
				ans += i_max - i_min + 1;
			}
		}
	}

	cout << ans << endl;

	return 0;
}
