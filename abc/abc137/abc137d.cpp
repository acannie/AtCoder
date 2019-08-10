#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

typedef struct
{
	int A;
	int B;
} works_s;

int cmp(const void *p, const void *q)
{
	int n = ((works_s *)q)->A - ((works_s *)p)->A;
	if (n == 0)
	{
		n = ((works_s *)p)->B - ((works_s *)q)->B;
	}
	return n;
}

int main()
{
	int N, M;

	cin >> N >> M;

	works_s workaaa[N];

	for (int i = 0; i < N; i++)
	{
		cin >> workaaa[i].A >> workaaa[i].B;
	}

	qsort(workaaa, N, sizeof(works_s), cmp);

	int count = 0;
	int nichime = M;

	for (int i = N - 1; i >= 0; i--)
	{
		if (workaaa[i].A <= nichime)
		{
			count += workaaa[i].B;

			nichime--;

			if (nichime == 0)
			{
				break;
			}
		}
	}

	//for (int i = 0; i < N; i++)
	//printf("%4d円 (%d)\n", workaaa[i].A, workaaa[i].B);

	cout << count << endl;

	return 0;
}
