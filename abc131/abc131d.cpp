#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

typedef struct scedule
{
	long int A;
	long int B;
} scedule_t;

int cmp(const void *p, const void *q)
{
	int r = ((scedule_t *)p)->B - ((scedule_t *)q)->B;
	if (r != 0)
		return r;
	return ((scedule_t *)p)->A - ((scedule_t *)q)->A;
}

int main()
{
	long int N;

	cin >> N;

	scedule_t T[N + 1];

	for (int i = 1; i <= N; i++)
	{
		cin >> T[i].A >> T[i].B;
	}

	qsort(T, N + 1, sizeof(scedule_t), cmp);

	long int time_count = 0;
	long int shimekiri;

	for (long int i = 1; i <= N; i++)
	{
		time_count += T[i].A;
		shimekiri = T[i].B;

		if (time_count > shimekiri)
		{
			cout << "No" << endl;
			return 0;
		}
	}

	cout << "Yes" << endl;

	/*
	cout << "----------------" << endl;

	for (int i = 1; i <= N; i++)
	{
		cout << T[i].A << " " << T[i].B << endl;
	}
	*/

	return 0;
}
