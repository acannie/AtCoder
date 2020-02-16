#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* ------- 宣言と入力 ------- */

    long long int N, K;

    cin >> N >> K;

    long long int A[N];

    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    /* ------- 計算 ------- */

    sort(A, A + N);

    int count_minus = 0;
    int count_zero = 0;
    int count_plus = 0;

    for (int i = 0; i < N; i++)
    {
        if (A[i] < 0)
        {
            count_minus++;
        }
        else if (A[i] == 0)
        {
            count_zero++;
        }
        else
        {
            count_plus++;
        }
    }

    long long int num_minus = count_plus * count_minus;
    long long int num_zero = count_minus * count_zero + count_plus * count_zero;
    long long int num_plus = pow(count_minus, 2) - count_minus + pow(count_plus, 2) - count_plus;

    long long int ans = 0;
    int retu;

    if (K <= num_minus)
    {
        int tasu = 1;
        long long int now_num = 0;
        retu = 0;
        string status = "increase";
        int i = 0;

        while (K < now_num)
        {
            now_num += tasu;
            if (status == "increase")
            {
                tasu++;
                if (tasu == min(count_minus, count_plus))
                {
                    status == "stop";
                }
            }
            else if (status == "stop")
            {
                i++;
                if (i == max(count_minus, count_plus) - min(count_minus, count_plus))
                {
                    status == "decrease";
                }
            }
            else
            {
                tasu--;
            }

            retu++;
        }
    }
    else if (K < num_plus)
    {
        ans = 0;
    }
    else
    {
        K -= num_minus;
        K -= num_zero;
    }

    cout << ans << endl;

    return 0;
}
