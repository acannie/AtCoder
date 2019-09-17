#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

int main()
{

	string S;

	cin >> S;

	if (S == "Sunny")
	{
		cout << "Cloudy" << endl;
	}
	else if (S == "Cloudy")
	{
		cout << "Rainy" << endl;
	}
	else
	{
		cout << "Sunny" << endl;
	}

	return 0;
}
