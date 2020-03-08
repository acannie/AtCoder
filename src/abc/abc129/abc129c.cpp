#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;

int kaijou(int num)
{
    for (int i = 1; i <= num; i++)
    {
        num *= i;
    }
    return num;
}

int calc(int start, int goal)
{
    int ans = 0;
    int stair = goal - start + 1;

    for (int i = stair / 2; i < stair; i++)
    {
        ans += kaijou(stair + i) / (kaijou(stair) * kaijou(i));
    }

    return ans;
}

int main()
{
    int N, M;

    cin >> N >> M;

    int a[N];

    for (int i = 1; i < M; i++)
    {
        cin >> a[i];
    }

    long int ans = 0;

    a[0] = 0;
    a[M + 1] = N + 1;

    for (int i = 0; i <= M; i++)
    {
        ans = calc(a[i], a[i + 1] - 1);
    }

    long int amari = ans % 1000000007;
    cout << amari << endl;

    return 0;
}