#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	int A, B, C;

	cin >> A >> B >> C;

	int ans;

	if (B + C > A)
	{
		ans = C-(A-B);
	}
	else
	{
		ans = 0;
	}

	cout << ans << endl;

	return 0;
}
