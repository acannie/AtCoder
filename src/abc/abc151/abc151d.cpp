#include <bits/stdc++.h>
using namespace std;

int main()
{
    int H, W;

    cin >> H >> W;

    string S[H];

    for (int i = 0; i < H; i++)
    {
        cin >> S[i];
    }

    string status[H];
    int distance[H][W] = {0};
    int distance_max = 0;

    for (int i_start = 0; i_start < H; i_start++)
    {
        for (int j_start = 0; j_start < W; j_start++)
        {
            for (int i = 0; i < H; i++)
            {
                for (int j = 0; j < W; j++)
                {
                    status[i][j] = S[i][j];
                }
            }

            distance[i_start][j_start] = 0;

            vector<int> queue_i;
            vector<int> queue_j;

            queue_i.push_back(i_start);
            queue_j.push_back(j_start);

            int count = 0;
            bool able_move = true;

            while (able_move)
            {
                status[queue_i[0]][queue_j[0]] = '#';

                able_move = false;
                count = distance[queue_i[0]][queue_j[0]] + 1;

                if (queue_i[0] != H - 1 && status[queue_i[0] + 1][queue_j[0]] == '.')
                {
                    distance[queue_i[0] + 1][queue_j[0]] = count;
                    queue_i.push_back(queue_i[0] + 1);
                    queue_j.push_back(queue_j[0]);
                    able_move = true;
                }
                if (queue_i[0] != 0 && status[queue_i[0] - 1][queue_j[0]] == '.')
                {
                    distance[queue_i[0] - 1][queue_j[0]] = count;
                    queue_i.push_back(queue_i[0] - 1);
                    queue_j.push_back(queue_j[0]);
                    able_move = true;
                }
                if (queue_j[0] != W - 1 && status[queue_i[0]][queue_j[0] + 1] == '.')
                {
                    distance[queue_i[0]][queue_j[0] + 1] = count;
                    queue_i.push_back(queue_i[0]);
                    queue_j.push_back(queue_j[0] + 1);
                    able_move = true;
                }
                if (queue_j[0] != 0 && status[queue_i[0]][queue_j[0] - 1] == '.')
                {
                    distance[queue_i[0]][queue_j[0] - 1] = count;
                    queue_i.push_back(queue_i[0]);
                    queue_j.push_back(queue_j[0] - 1);
                    able_move = true;
                }

                queue_i.erase(queue_i.begin());
                queue_j.erase(queue_j.begin());
            }

            if (count - 1 > distance_max)
            {
                distance_max = count - 1;
            }

            // for (int i = 0; i < H; i++)
            // {
            //     for (int j = 0; j < W; j++)
            //     {
            //         if (distance[i][j] > distance_max)
            //         {
            //             distance_max = distance[i][j];
            //         }
            //     }
            // }
        }
    }

    cout << distance_max << endl;

    return 0;
}
