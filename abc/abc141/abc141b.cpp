#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
	string S;

	cin >> S;

	bool flg = true;

	for (int i = 0; i < S.length(); i++)
	{
		if (i % 2 == 0)
		{
			if (S[i] == 'L')
			{
				flg = false;
				break;
			}
		}

		if (i % 2 == 1)
		{
			if (S[i] == 'R')
			{
				flg = false;
				break;
			}
		}
	}

	if (flg == true)
	{
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
	}

	return 0;
}
