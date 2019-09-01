#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	int N;

	cin >> N;

	int A[N + 1][N];

	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N - 1; j++)
		{
			cin >> A[i][j];
		}
	}

	int wanttogame[N + 1];
	int nowj[N + 1];
	bool finish[N + 1];
	bool done[N + 1];

	for (int i = 1; i <= N; i++)
	{
		wanttogame[i] = A[i][1];
		nowj[i] = 1;
		finish[i] = false;
		done[i] = false;
	}

	int count = 0;
	bool perfect = false;
	bool impossible = true;

	while (perfect == false)
	{
		for (int i = 1; i <= N; i++)
		{
			if (finish[i] == false && done[i] == false)
			{
				int rival = wanttogame[i];

				if (i == wanttogame[rival] && finish[rival] == false && done[rival] == false)
				{
					impossible = false;

					if (nowj[i] < N)
					{
						nowj[i]++;
						wanttogame[i] = A[i][nowj[i]];
						done[i] = true;
					}
					else
					{
						finish[i] = true;
					}

					if (nowj[rival])
					{
						nowj[rival]++;
						wanttogame[rival] = A[rival][nowj[rival]];
						done[rival] = true;
					}
					else
					{
						finish[rival] = true;
					}
				}
			}
		}
		count++;

		if (impossible == true)
		{
			cout << "-1" << endl;
			return 0;
		}

		impossible = true;

		for (int i = 1; i <= N; i++)
		{
			done[i] = false;
		}

		for (int i = 1; i <= N; i++)
		{
			perfect = true;

			if (finish[i] == false)
			{
				perfect = false;
				break;
			}
		}
	}

	cout << count << endl;

	return 0;
}
