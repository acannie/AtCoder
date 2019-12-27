#include <bits/stdc++.h>
#define TATE 5
using namespace std;

int main()
{
    int N;

    cin >> N;

    string S[TATE];

    for (int i = 0; i < TATE; i++)
    {
        cin >> S[i];
    }

    int color_N = 3;
    int red = 0;
    int blue = 1;
    int white = 2;

    int colorCount[N][color_N] = {}; //存在する色の個数
    int mustChange[N][color_N];      //塗り替えなければならない色の個数
    int minChangeColor[N];           //最も塗り替えが少なくて済む色

    int minChange[N][color_N] = {}; //必要な塗り替え数

    for (int j = 0; j < N; j++)
    {
        for (int i = 0; i < TATE; i++)
        {
            if (S[i][j] == 'R')
            {
                colorCount[j][red]++;
            }
            else if (S[i][j] == 'B')
            {
                colorCount[j][blue]++;
            }
            else if (S[i][j] == 'W')
            {
                colorCount[j][white]++;
            }
        }

        for (int color = red; color < color_N; color++)
        {
            mustChange[j][color] = TATE - colorCount[j][color];
        }

        for (int color1 = red; color1 < 3; color1++)
        {
            minChange[j][color1] += mustChange[j][color1];

            if (j > 0)
            {
                int minChangeN = TATE * N;

                for (int color2 = red; color2 < color_N; color2++)
                {
                    if (color2 != color1 && minChange[j - 1][color2] < minChangeN)
                    {
                        minChangeN = minChange[j - 1][color2];
                        minChangeColor[j - 1] = color2;
                    }
                }

                minChange[j][color1] += minChange[j - 1][minChangeColor[j - 1]];
            }
        }
    }

    int min = TATE * N;

    for (int color = red; color < color_N; color++)
    {
        if (minChange[N - 1][color] < min)
        {
            min = minChange[N - 1][color];
        }
    }

    cout << min << endl;

    return 0;
}