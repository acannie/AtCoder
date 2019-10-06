#include <bits/stdc++.h>
using namespace std;

int main()
{
	string S;

	cin >> S;

	int charwidth = 'b' - 'a';

	if (S.length() < 26)
	{
		bool word[26] = {false};

		for (int i = 0; i < S.length(); i++)
		{
			char w1 = 'a';
			char w2 = S[i];
			word[w2 - w1] = true;
		}

		for (int i = 0; i < 26; i++)
		{
			if (word[charwidth * i] == false)
			{
				S += 'a' + charwidth * i;
				cout << S << endl;
				return 0;
			}
		}
	}
	else
	{
		string deletechar = {};

		for (int i = S.length() - 2; i > 0; i--)
		{
			if (i == 1)
			{
				cout << "-1" << endl;
				return 0;
			}

			if (S[i] != S[i + 1] + charwidth)
			{
				deletechar += S[i + 1];
				S.pop_back();

				char min = 'z';
				for (int j = 0; j < deletechar.length(); j++)
				{
					if (deletechar[j] >= S[i])
					{
						min = deletechar[j];
						break;
					}
				}

				S.pop_back();

				S += min;
				cout << S << endl;
				return 0;
			}

			deletechar += S[i + 1];
			S.pop_back();
		}
	}
}
