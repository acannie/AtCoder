#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	int K, X;

	cin >> K >> X;

	if (K == 1)
	{
		cout << X << endl;
	}
	else
	{
		int start = max(-1000000, X - (K - 1));
		int goal = min(X + (K - 1), 1000000);

		for (int i = start; i <= goal; i++)
		{
			cout << i << " ";
		}
		cout << endl;
	}

	return 0;
}
