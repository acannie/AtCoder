#include <bits/stdc++.h>
using namespace std;

typedef struct
{
	int a;
	int b;
}ab_set;

int cmp(const void *p, const void *q)
{
	return ((ab_set *)p)->a - ((ab_set *)q)->a;
}

int main()
{
	int N;
	long long int K;

	cin >> N >> K;

	ab_set lst[N];

	for (int i = 0; i < N; i++)
	{
		cin >> lst[i].a >> lst[i].b;
	}

	qsort(lst, N, sizeof(ab_set), cmp);

	long long int count = 0;
	int i_ans;

	for (int i = 0; i < N; i++)
	{
		count += (long long int)lst[i].b;
		if ((long long int)count >= K)
		{
			i_ans = i;
			break;
		}
	}

	cout << lst[i_ans].a << endl;

	return 0;
}
