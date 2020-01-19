#include <bits/stdc++.h>
using namespace std;

int keta(int n)
{
    int count = 0;

    while (n > 0)
    {
        n /= 10;
        count++;
    }

    return count;
}

int simo(int n)
{
    return n % 10;
}

int kami(int n)
{
    if (keta(n) == 1)
    {
        return n;
    }

    int ans = n;

    for (int i = 0; i < keta(n) - 1; i++)
    {
        ans /= 10;
    }

    return ans;
}

int main()
{
    /* ------- 宣言と入力 ------- */

    int N;

    cin >> N;

    /* ------- 計算 ------- */

    int comb[10][10] = {};
    int a, b, c;

    for (int i = 1; i <= N; i++)
    {

        if (i == 101)
        {
            a = keta(i);
            b = kami(i);
            c = simo(i);
        }
        comb[kami(i)][simo(i)]++;
    }

    int ans = 0;

    for (int i = 1; i < 10; i++)
    {
        for (int j = 1; j < 10; j++)
        {
            if (i == j)
            {
                ans += (int)pow(comb[i][j], 2);
            }
            else
            {
                if (max(10 * i + j, 10 * j + i) <= N)
                {
                    ans += comb[i][j] * comb[j][i];
                }
            }
        }
    }

    cout << ans << endl;

    return 0;
}
