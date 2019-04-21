#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int main()
{
    int N, M;

    cin >> N >> M;

    //firstは金額、secondは個数
    vector<pair<int, int>> pairs(N);

    for (int i = 0; i < N; i++)
    {
        int a, b;
        cin >> a >> b;
        pairs[i] = make_pair(a, b);
    }

    sort(pairs.begin(), pairs.end());

    long long ans = 0;

    /*
    int store = 0;

    for (int i = 0; i < M; i++) //iは買ったドリンクの本数
    {
        pair<int, int> pair = pairs[store];

        int price = pair.first;
        int num = pair.second;

        ans = ans + (long long)price;

        num--;
        pairs[store] = make_pair(price, num);

        if (num == 0)
        {
            store++;
        }
    }
    */
    int i = 0;
    while ((M > 0) && (i < N))
    {
        pair<int, int> pair = pairs[i];

        int price = pair.first;
        int num = pair.second;

        /*if (M >= num)
        {
            ans = ans + (long long)price * (long long)num;
            M = M - num;
        }
        else
        {
            ans = ans + (long long)price * (long long)M;
            M = 0;
        }
        */

        ans = ans + (long long)price * (long long)min(num, M);
        M = M - min(num, M);

        i++;
    }

    cout << ans << endl;

    return 0;
}