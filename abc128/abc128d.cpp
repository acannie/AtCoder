#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int N, K;

    cin >> N >> K;

    int V[N + 1];

    for (int i = 1; i <= N; i++)
    {
        cin >> V[i];
    }

    int have = 0;
    int value = 0;

    for (int i = 0; i < K; i++)
    {
        if ()
        {
            have++;
            value += V[1];

            for (int j = 1; j <= N - have; j++)
            {
                V[j] = V[j + 1];
            }
        }
        else if ()
        {
            have++;
            value += V[N - have];
        }
        else if ()
        {
            have--;
            V[1] = aaa;
            value -=aaa;

            for (int j = 2; j <= N - have; j++)
            {
                V[j] = V[j - 1];
            }
        }else if(){
            have--;
            V[N-have] = aaa;
            value -= aaa;
        }
    }

    cout << maxvalue << endl;

    return 0;
}