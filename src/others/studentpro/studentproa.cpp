#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	int M, D;

	cin >> M >> D;

	int count = 0;

	for (int d10 = 2; d10 <= D / 10; d10++)
	{
		int d1_end;

		if (d10 == D / 10)
		{
			d1_end = D % 10;
		}
		else
		{
			d1_end = 9;
		}

		for (int d1 = 2; d1 <= d1_end; d1++)
		{
			if (d1 * d10 <= M)
			{
				count++;
			}
		}
	}

	cout << count << endl;

	return 0;
}
