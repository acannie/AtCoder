#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int A, B, T;

    cin >> A >> B >> T;

    int bis;

    bis = floor(T / A) * B;

    cout << bis << endl;

    return 0;
}