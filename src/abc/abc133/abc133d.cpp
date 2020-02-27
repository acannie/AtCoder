#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	long long int N;

	cin >> N;

	long long int A[N + 1];

	for (long long int i = 1; i <= N; i++)
	{
		cin >> A[i];
	}

	long long int rain[N + 1];

	rain[1] = A[N] / 2 + A[1] / 2;

	for (long long int i = 2; i <= N; i++)
	{
		rain[i] += A[i - 1] / 2 + A[i] / 2;
	}

	for (long long i = 1; i <= N; i++)
	{
		cout << rain[i] << endl;
	}

	return 0;
}
