#include <bits/stdc++.h>
using namespace std;

int main()
{
	int A, B;

	cin >> A >> B;

	int kirten = 2 * B;

	int ans;

	if (kirten >= A)
	{
		ans = 0;
	}
	else
	{
		ans = A - kirten;
	}

	cout << ans << endl;

	return 0;
}
