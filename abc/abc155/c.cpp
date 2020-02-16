#include <bits/stdc++.h>
#include <map>
using namespace std;

int main()
{
    /* ------- 宣言と入力 ------- */

    int N;

    cin >> N;

    string S[N];

    for (int i = 0; i < N; i++)
    {
        cin >> S[i];
    }

    /* ------- 計算 ------- */

    map<string, int> mp;

    for (int i = 0; i < N; i++)
    {
        mp[S[i]]++;
    }

    int max = 0;

    for (auto x : mp)
    {
        if (x.second >= max)
        {
            max = x.second;
        }
    }

    for (auto x : mp)
    {
        if (x.second == max)
        {
            cout << x.first << endl;
        }
    }

    // for (map<string, int>::iterator i = mp.begin(); i != mp.end(); ++i) {
    //     if(mp[i]>max){
    //         max=
    //     }
    // }

    return 0;
}
