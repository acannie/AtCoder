#include <iostream>
using namespace std;

int main()
{
    int N;
    int a[N];

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }

    int R, G, B;
    int conbination[N];

    for (int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; i++)
        {
            R =R+a[i]; 
        }
        
    }

    int count;

    if ((R + G > B) && (G + B > R) && (B + R > G))
    {
        count++;
    }

    int ans = count % 998244353;

    cout << ans << endl;

    return 0;
}