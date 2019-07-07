#include <iostream>
using namespace std;

int main()
{
    int N;
    int Y;

    int amount;

    cin >> N >> Y;

    int bill10000max = Y / 10000;
    int bill5000max = Y / 5000;
    int bill1000max = Y / 1000;

    for (int bill10000 = 0; bill10000 <= bill10000max; bill10000++)
    {
        for (int bill5000 = 0; bill5000 <= bill5000max; bill5000++)
        {
            for (int bill1000 = 0; bill1000 <= bill1000max; bill1000++)
            {
                amount = bill10000 * 10000 + bill5000 * 5000 + bill1000 * 1000;
                if ((amount == Y) && (bill10000 + bill5000 + bill1000 <= N))
                {
                    cout << bill10000 << ' ' << bill5000 << ' ' << bill1000 << endl;
                    return 0;
                }
            }
        }
    }

    cout << -1 << ' ' << -1 << ' ' << -1 << endl;

    return 0;
}