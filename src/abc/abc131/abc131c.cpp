#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	long long A, B, C, D;

	cin >> A >> B >> C >> D;

	long long count = 0;

	for (long long i = A; i <= B; i++)
	{
		if ((i % C != 0) && (i % D != 0))
		{
			count++;
		}
	}

	cout << count << endl;

	return 0;
}
