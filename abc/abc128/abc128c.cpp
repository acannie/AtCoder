#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    //代入

    int N, M;
    cin >> N >> M;

    int k[M + 1];
    int s[M + 1][11];
    for (int i = 1; i <= M; i++)
    {
        cin >> k[i];
        for (int j = 1; j <= k[i]; j++)
        {
            cin >> s[i][j];
        }
    }

    int p[M + 1];
    for (int i = 1; i <= M; i++)
    {
        cin >> p[i];
    }

    //計算

    /*int lighton[M + 1];

    for (int i = 1; i <= M; i++)
    {
        lighton[i] = 0;
    }

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= k[i]; j++)
        {
            if ((s[i][j] % 2) == p[i])
            {
                lighton[i]++;
            }
        }
    }

    int ans = 0;

    for (int i = 1; i <= M; i++)
    {
        ans += lighton[i];
    }
    */

    int num[M + 1][11];

    for (int i = 1; i <= M; i++)
    {
        for (int j = 1; j <= (k[i] / 2 + 1); j++)
        {
            num[i][j] = p[i] + (j-1) * 2;
        }
    }

    int sw[N + 1];

    bool sssss[M + 1][11];

for (int i = 1; i <=M; i++)
{
    
}

    
    
    
    
    cout << ans << endl;

    return 0;
}