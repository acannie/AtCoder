#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	string S;
	cin >> S;

	bool flg = true;

	for (int i = 0; i < S.length() - 1; i++)
	{
		if (S[i + 1] == S[i])
		{
			flg = false;
			break;
		}
	}

	if (flg == true)
	{
		cout << "Good" << endl;
	}
	else
	{
		cout << "Bad" << endl;
	}
	
	return 0;
}
