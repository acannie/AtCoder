#include <bits/stdc++.h>
using namespace std;

typedef struct
{
	int i;
	int A;
} record_t;

int cmp(const void *p, const void *q)
{
	return ((record_t *)p)->A - ((record_t *)q)->A;
}

int main()
{
	int N;

	cin >> N;

	record_t toukou[N];

	for (int j = 0; j < N; j++)
	{
		toukou[j].i = j+1;
		cin >> toukou[j].A;
	}

	qsort(toukou, N, sizeof(record_t), cmp);

	for (int j = 0; j < N; j++)
	{
		cout << toukou[j].i << endl;
	}

	return 0;
}
