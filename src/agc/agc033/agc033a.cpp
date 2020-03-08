#include <iostream>
#include <string>
using namespace std;

int main()
{
    int H, W;

    cin >> H >> W;

    string A[H];

    for (int i = 0; i < H; i++)
    {
        cin >> A[i];
    }

    bool black[H][W];
    bool whiteExist;
    int count = 0;

    while (1)
    {
        whiteExist = false;

        for (int h = 0; h < H; h++)
        {
            for (int w = 0; w < W; w++)
            {
                black[h][w] = false;
                if (A[h][w] == '#')
                {
                    black[h][w] = true;
                }
                else
                {
                    whiteExist = true;
                }
            }
        }

        if (whiteExist == false)
        {
            break;
        }

        for (int h = 0; h < H; h++)
        {
            for (int w = 0; w < W; w++)
            {
                if (black[h][w] == true)
                {
                    if (h > 0)
                    {
                        A[h - 1][w] = '#';
                    }
                    if (w > 0)
                    {
                        A[h][w - 1] = '#';
                    }
                    if (w < W - 1)
                    {
                        A[h][w + 1] = '#';
                    }
                    if (h < H - 1)
                    {
                        A[h + 1][w] = '#';
                    }
                }
            }
        }

        count++;
    }

    cout << count << endl;

    return 0;
}