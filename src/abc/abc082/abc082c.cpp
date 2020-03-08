#include <bits/stdc++.h>
using namespace std;

typedef struct num
{
	long long int i;
	int n;
};

int main()
{
	int N;

	cin >> N;

	long long int a[N];

	for (int i = 0; i < N; i++)
	{
		cin >> a[i];
	}

	map<int, int> mp;

	for (int i = 0; i < N; i++)
	{
		mp[a[i]]++;
	}

	long long int count = 0;

	for (auto p : mp)
	{
		if (p.first > p.second)
		{
			count += p.second;
		}
		else
		{
			count += p.second - p.first;
		}
	}

	cout << count << endl;

	return 0;
}
