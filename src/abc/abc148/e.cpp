#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
    long long int N;

    cin >> N;

    if (N % 2 == 1)
    {
        cout << "0" << endl;
        return 0;
    }

    long long int i = 1;
    long long int count = 0;

    while (pow(5, i) * 2 <= N)
    {
        long long int r = pow(5, i) * 2;
        count += N / r;
        i++;
    }

    cout << count << endl;

    return 0;
}