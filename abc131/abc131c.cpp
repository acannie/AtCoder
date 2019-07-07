#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	long int A, B, C, D;

	cin >> A >> B >> C >> D;

	long int count = 0;

	for (long int i = A; i <= B; i++)
	{
		if ((i % C != 0) && (i % D != 0))
		{
			count++;
		}
	}

	cout << count << endl;

	return 0;
}
