#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	int N;

	cin >> N;

	int x[N + 1];
	int y[N + 1];

	for (int i = 1; i <= N; i++)
	{
		cin >> x[i] >> y[i];
	}

	int cost = 1;

	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			if ((x[i] - x[j]) == (y[i] - y[j]))
			{
				
				
			}
		}
	}

	int ans;

	cout << ans << endl;

	return 0;
}
