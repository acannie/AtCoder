#include <bits/stdc++.h>
using namespace std;

void solve(std::istream &ist, std::ostream &ost)
{
    /* ------- 宣言と入力 ------- */

    int K;

    ist >> K;

    /* ------- 計算 ------- */

    long long num;

    queue<long long> que;

    for (int i = 1; i <= 9; i++)
    {
        que.push(i);
    }

    for (int i = 0; i < K; i++)
    {
        num = que.front();
        que.pop();

        if (num % 10 != 0)
        {
            que.push(10 * num + num % 10 - 1);
        }

        que.push(10 * num + num % 10);

        if (num % 10 != 9)
        {
            que.push(10 * num + num % 10 + 1);
        }
    }

    ost << num << endl;
}

#ifndef WOMAIN
int main()
{
    solve(std::cin, std::cout);
    return 0;
}
#endif
