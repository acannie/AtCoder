#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <string.h>

using namespace std;

int main()
{
	long long int N;

	cin >> N;

	char s[N][10];
	char tmp[10];

	for (long long int i = 0; i < N; i++)
	{
		cin >> s[i];
	}

	for (long long int i = 1; i < N; i++)
	{
		for (long long int j = 1; j < N; j++)
		{
			if (strcmp(s[j - 1], s[j]) > 0)
			{
				strcpy(tmp, s[j - 1]);
				strcpy(s[j - 1], s[j]);
				strcpy(s[j], tmp);
			}
		}
	}

	int count = 0;

	for (long long int i = 0; i < N; i++)
	{
		for (long long int j = i + 1; j < N; j++)
		{
			if (s[i] == s[j])
			{
				count++;
			}
		}
	}

	cout << count << endl;

	return 0;
}
