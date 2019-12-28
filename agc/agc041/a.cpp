#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int N;
    long long int A, B;

    cin >> N >> A >> B;

    long long int ans = 0;

    if ((B - A) % 2 == 0)
    {
        ans = (B - A) / 2;
    }
    else
    {
        long long int distanceFrom1 = A - 1;
        long long int distanceFromN = N - B;

        long long int nearEnd;
        long long int farEnd;
        if (distanceFrom1 < distanceFromN)
        {
            nearEnd = A;
            farEnd = B;

            if (B - A == 1 || B - A == 2)
            {
                ans = B - 1;
            }
            else
            {
                ans += (A - 1) + 1;
                B = B - ((A - 1) + 1);
                ans += (B - 1) / 2;
            }
        }
        else
        {
            nearEnd = B;
            farEnd = A;

            if (B - A == 1 || B - A == 2)
            {
                ans = N - A;
            }
            else
            {
                ans += (N - B) + 1;
                A = A + ((N - B) + 1);
                ans += (N - A) / 2;
            }
        }
    }

    cout << ans << endl;

    return 0;
}
