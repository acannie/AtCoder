#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
	int N, K, Q;

	cin >> N >> K >> Q;

	int A[Q + 1];

	for (int i = 1; i <= Q; i++)
	{
		cin >> A[i];
	}

	int player[N + 1] = {0};

	for (int i = 1; i <= Q; i++)
	{
		int buf = A[i];
		player[buf]++;
	}

	for (int i = 1; i <= N; i++)
	{
		if (K - Q + player[i] > 0)
		{
			cout << "Yes" << endl;
		}
		else
		{
			cout << "No" << endl;
		}
	}

	return 0;
}
