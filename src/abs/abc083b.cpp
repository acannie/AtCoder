#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int N, A, B;

    cin >> N >> A >> B;

    int n = 4; // because of limit
    int allsum = 0;

    for (int i = 1; i <= N; i++)
    {
        int sum = 0; // sum of all digits of i
        int numberToCheckDigits = i;
        for (int j = n; j >= 0; j--)
        {
            sum = sum + numberToCheckDigits / ((int) pow(10, j));
            numberToCheckDigits = numberToCheckDigits % ((int) pow(10, j));
        }
        if ((A <= sum) && (sum <= B))
        {
            allsum = allsum + i;
        }
    }

    cout << allsum;

    return 0;
}