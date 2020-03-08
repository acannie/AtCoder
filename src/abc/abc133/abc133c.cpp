#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

#define N 2019

int main()
{
	long long int L, R;
	cin >> L >> R;

	int ans;

	if (( - R) >= 2019)
	{
		ans = 1;
	}
	else
	{
		long long int Lmod = L % N;
		long long int Rmod = R % N;

		if ((Lmod < Rmod) && (Lmod < 6) && (Rmod < 46))
		{
			ans = L % N + (L + 1) % N;
		}
		else if ((Lmod < Rmod) && (Lmod >= 45))
		{
			ans = L % (N + 45) + R % (N + 46);
		}
		else if (Lmod > Rmod)
		{
		}
	}

	/* 

	int min = N;

	long long int ansa = L % N;
	long long int ansb = (L + 1) % N;

	long long int ans = ansa * ansb;

	if (ans >= 2019)
	{
		ans = ans % 2019;
	}

	*/

	/*

	for (long long int i = L; i < R; i++)
	{
		for (long long int j = i + 1; j <= R; j++)
		{

			if (ans < min)
			{
				min = ans;
			}
		}
	}

	*/

	cout << ans << endl;

	return 0;
}
