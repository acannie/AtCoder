#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	int N, L;

	cin >> N >> L;

	int taste_apple[N];
	int taste_pie = 0;

	int taste_min = 1000;
	int taste_min_i;

	bool minus_flg;

	for (int i = 0; i < N; i++)
	{
		taste_apple[i] = L + i;
		taste_pie += taste_apple[i];

		if (abs(taste_apple[i]) < abs(taste_min))
		{
			taste_min = abs(taste_apple[i]);
			taste_min_i = i;
		}
	}

	int ans = taste_pie - taste_apple[taste_min_i];

	cout << ans << endl;

	return 0;
}
