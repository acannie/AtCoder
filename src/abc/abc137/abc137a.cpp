#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	int A, B;

	cin >> A >> B;

	int num1 = A + B;
	int num2 = A - B;
	int num3 = A * B;

	int ans;

	if (num1 >= num2)
	{
		ans = num1;
	}
	else
	{
		ans = num2;
	}
	
	if (num3 >= ans)
	{
		ans = num3;
	}

	cout << ans << endl;

	return 0;
}
