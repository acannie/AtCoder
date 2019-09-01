#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	string S, T;

	cin >> S;
	cin >> T;

	int count = 0;
	for (int i = 0; i < 3; i++)
	{
		if (S[i] == T[i])
		{
			count++;
		}
	}

	cout << count << endl;

	return 0;
}
