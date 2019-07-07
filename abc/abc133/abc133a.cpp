#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	int N;
	int A, B;

	cin >> N >> A >> B;

	int costA = A * N;
	int costB = B;

	cout << min(costA, costB) << endl;

	return 0;
}
