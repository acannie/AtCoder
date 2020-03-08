#include <bits/stdc++.h>
using namespace std;

int main()
{
	int sx, sy;
	int tx, ty;

	cin >> sx >> sy >> tx >> ty;

	int dx = tx - sx;
	int dy = ty - sy;

	// first outbound
	for (int i = 0; i < dx; i++)
	{
		cout << "R";
	}
	for (int i = 0; i < dy; i++)
	{
		cout << "U";
	}

	// first inbound
	for (int i = 0; i < dx; i++)
	{
		cout << "L";
	}
	for (int i = 0; i < dy; i++)
	{
		cout << "D";
	}

	// second outbound
	cout << "D";
	for (int i = 0; i < dx + 1; i++)
	{
		cout << "R";
	}
	for (int i = 0; i < dy + 1; i++)
	{
		cout << "U";
	}
	cout << "L";

	// second inbound
	cout << "U";
	for (int i = 0; i < dx + 1; i++)
	{
		cout << "L";
	}
	for (int i = 0; i < dy + 1; i++)
	{
		cout << "D";
	}
	cout << "R";

	return 0;
}
