#include <iostream>
#include <math.h>

using namespace std;

long long int binary(int bina)
{
    long long int ans = 0;
    for (int i = 0; bina > 0; i++)
    {
        ans = ans + (bina % 2) * pow(10, i);
        bina = bina / 2;
    }
    return ans;
}

int main()
{
    int number;
    cin >> number;
    cout << binary(number) << endl;
}