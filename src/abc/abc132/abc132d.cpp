#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;

int junretsu(int n)
{
    int ans = 1;

    if (n < 0)
    {
        return ans;
    }
    else
    {
        for (int i = n; i >= 1; i--)
        {
            ans *= i;
        }
        return ans;
    }
}

int ball_junretsu(int ball, int shikiri)
{
    int ans;

    ans = junretsu(ball + shikiri) / junretsu(ball) / junretsu(shikiri);
    return ans;
}

int main()
{
    int N, K;

    cin >> N >> K;

    int blue = K;
    int red = N - K;

    for (int i = 1; i <= K; i++)
    {
        int red_shikiri = i - 1;
        int red_nokori = N - blue - red_shikiri;
        int sukima = i + 1;
        int sousu;

        if (red_nokori != 0)
        {
            sousu = ball_junretsu(blue - 2, red_shikiri) * ball_junretsu(red_nokori, sukima - 1);
        }
        else
        {
            sousu = ball_junretsu(blue - 2, red_shikiri);
        }

        cout << sousu << endl;
        cout << endl;
    }

    return 0;
}