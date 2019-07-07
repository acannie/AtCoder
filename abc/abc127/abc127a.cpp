#include <iostream>
#include <string>
using namespace std;

int main()
{
    int A, B;

    cin >> A >> B;

    int ans;

    if (A >= 13)
    {
        ans = B;
    }
    else if (A <= 5)
    {
        ans = 0;
    }
    else
    {
        ans = B / 2;
    }

    cout << ans << endl;

    return 0;
}