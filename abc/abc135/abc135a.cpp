#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	long long int A, B;

	cin >> A >> B;

	long long int big = max(A, B);
	long long int small = min(A, B);

	if (A % 2 != B % 2)
	{
		cout << "IMPOSSIBLE" << endl;
		return 0;
	}

	long long int K;

	for (long long int i = small; ; i++)
	{
		if ((i - small) == (big - i))
		{
			K = i;
			break;
		}
	}

	cout << K << endl;

	return 0;
}
