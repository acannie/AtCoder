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

	int acount = 0;
	int bcount = 0;
	int ccount = 0;

	for (int i = 0; i < S.length(); i++)
	{
		if (S[i] == 'a')
		{
			acount++;
		}
		else if (S[i] == 'b')
		{
			bcount++;
		}
		else
		{
			ccount++;
		}
	}

	if ((bcount == acount || bcount == acount + 1) && (ccount == acount || ccount == acount + 1))
	{
		cout << "YES" << endl;
	}
	else if ((bcount == acount || bcount == acount - 1) && (ccount == acount || ccount == acount - 1))
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}

	return 0;
}
