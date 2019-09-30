#include <bits/stdc++.h>
using namespace std;

typedef struct
{
	long long int a;
	long long int b;
	vector<long long int> c;
} key_info;

int cmp(const void *p, const void *q)
{
	return ((key_info *)p)->a - ((key_info *)q)->a;
}

int main()
{
	long long int N, M;

	cin >> N >> M;

	//int a[M], b[M];
	//vector<int> c[M];

	key_info lst[M];

	for (long long int i = 0; i < M; i++)
	{
		cin >> lst[i].a >> lst[i].b;

		for (long long int j = 0; j < lst[i].b; j++)
		{
			long long int buf;
			cin >> buf;
			lst[i].c.push_back(buf);
		}
	}

	qsort(lst, M, sizeof(key_info), cmp);

	long long int ans = 0;

	bool bought[N] = {false};

	for (long long int i = 0; i < M; i++)
	{
		bool flg = false;

		for (long long int j = 0; j < lst[i].b; j++)
		{
			if (bought[lst[i].c[j] - 1] == false)
			{
				flg = true;
				bought[lst[i].c[j] - 1] = true;
			}
		}

		if (flg == true)
		{
			ans += lst[i].a;
		}
	}

	for (long long int i = 0; i < N; i++)
	{
		if (bought[i] == false)
		{
			cout << "-1" << endl;
			return 0;
		}
	}

	cout << ans << endl;

	return 0;
}
