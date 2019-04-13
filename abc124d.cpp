#include <iostream>
using namespace std;

int main()
{
    int N, K;

    cin >> N >> K;

    string S;

    cin >> S;

    int count;
    int countmax = 0;

    for (int k = 0; k < K; k++)
    {
        for (int l = 0; l < N - 1; l++)
        {
            for (int r = l; r < N; r++)
            {
                for (int i = l; i <= r; i++)
                {
                    if (S[i] == '0')
                    {
                        S[i] = '1';
                    }
                    else
                    {
                        S[i] = '0';
                    }
                }
                count = 0;
                for (int i = 0; i < N; i++)
                {
                    if (S[i] == '0')
                    {
                        count = 0;
                    }
                    else
                    {
                        count++;
                    }

                    if (count > countmax)
                    {
                        countmax = count;
                    }
                }
            }
        }
    }

    cout << countmax << endl;

    return 0;
}