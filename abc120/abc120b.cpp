#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    int A, B, K;

    cin >> A >> B >> K;

    int num[max(A, B)];

    int j = 1;

    for (int i = max(A, B); i > 0; i--)
    {
        if ((A % i == 0) && (B % i == 0))
        {
            num[j] = i;
            j++;
        }
    }

    cout << num[K] << endl;

    return 0;
}