#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
	int N, M;

	cin >> N >> M;

	long long int moto[N + 1];
	long long int A[N + 1];

	for (int i = 1; i <= N; i++)
	{
		cin >> moto[i];
		A[i] = moto[i];
	}

	long long int discount_per[N + 1] = {0};
	long long int tekiyou[N + 1] = {0};

	for (int i = 1; i <= M; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			discount_per[j] = A[j] - A[j] / 2;
		}

		long long int discountmax = 0;
		int discountmaxi;

		for (int j = 1; j <= N; j++)
		{
			if (discount_per[j] > discountmax)
			{
				discountmax = discount_per[j];
				discountmaxi = j;
			}
		}

		tekiyou[discountmaxi]++;

		A[discountmaxi] = A[discountmaxi] / 2;
	}

	long long int ans = 0;

	for (int i = 1; i <= N; i++)
	{
		ans += moto[i] / pow(2, tekiyou[i]);
	}

	cout << ans << endl;

	return 0;
}
