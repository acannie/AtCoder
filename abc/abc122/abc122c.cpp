#include <iostream>
using namespace std;

int main()
{
    int N, Q;
    string S;

    cin >> N >> Q;
    cin >> S;

    int l[Q], r[Q];

    for (int i = 0; i < Q; i++)
    {
        cin >> l[i] >> r[i];
        l[i] = l[i] - 1;
        r[i] = r[i] - 1;
    }

    /*
    int count[Q];

    for (int i = 0; i < Q; i++)
    {
        count[i] = 0;
        for (int j = l[i] - 1; j < r[i] - 1; j++)
        {
            if ((S[j] == 'A') && (S[j + 1] == 'C'))
            {
                count[i]++;
            }
        }
        cout << count[i] << endl;
    }
    */

    int count[N];
    int tmp = 0;

    count[0] = 0;

    for (int i = 1; i < N; i++)
    {
        if ((S[i - 1] == 'A') && (S[i] == 'C'))
        {
            tmp++;
            count[i] = tmp;
        }else{
            count[i] = tmp;
        }
    }

    int ans;

    for (int i = 0; i < Q; i++)
    {
        ans = count[r[i]] - count[l[i]];
        cout << ans << endl;
    }

    return 0;
}