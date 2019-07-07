#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	int N, X;

	cin >> N >> X;

	int L[N + 1];

	for (int i = 1; i <= N; i++)
	{
		cin >> L[i];
	}

	int D[N + 2];
	int count;

	D[1] = 0;

	if (D[1] <= X)
	{
		count = 1;
	}else
	{
		count = 0;
	}
	
	

	for (int i = 2; i <= N+1; i++)
	{
		D[i] = D[i-1] + L[i-1];
		if (D[i] <= X)
		{
			count++;
		}
	}

	cout << count << endl;

	return 0;
}
