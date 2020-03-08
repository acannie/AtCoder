#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	int N;

	cin >> N;

	int p[N];
	int q[N];

	for (int i = 0; i < N; i++)
	{
		cin >> p[i];
		q[i] = p[i];
	}

	sort(q, q + N);

	int count = 0;

	for (int i = 0; i < N; i++)
	{
		if (p[i] != q[i])
		{
			count++;
		}
	}

	if ((count == 2) || (count == 0))
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}

	return 0;
}
