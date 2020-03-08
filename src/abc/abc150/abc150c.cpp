#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;

    cin >> N;

    int P[N], Q[N];

    for (int i = 0; i < N; i++)
    {
        cin >> P[i];
    }

    for (int i = 0; i < N; i++)
    {
        cin >> Q[i];
    }

    int count = 0;
    int a, b;

    vector<int> v1(N);
    iota(v1.begin(), v1.end(), 1); // v に 1, 2, ... N を設定
    do
    {
        count++;
        bool flg = true;

        for (int i = 0; i < N; i++)
        {
            if (v1[i] != P[i])
            {
                flg = false;
                break;
            }
        }

        if (flg == true)
        {
            a = count;
            break;
        }

    } while (next_permutation(v1.begin(), v1.end())); // 次の順列を生成

    count = 0;
    vector<int> v2(N);
    iota(v2.begin(), v2.end(), 1); // v に 1, 2, ... N を設定
    do
    {
        count++;
        bool flg = true;

        for (int i = 0; i < N; i++)
        {
            if (v2[i] != Q[i])
            {
                flg = false;
                break;
            }
        }

        if (flg == true)
        {
            b = count;
            break;
        }

    } while (next_permutation(v2.begin(), v2.end())); // 次の順列を生成

    cout << abs(a - b) << endl;

    return 0;
}
