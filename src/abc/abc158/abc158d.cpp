#include <bits/stdc++.h>
using namespace std;

typedef struct TFC
{
    int T;
    int F;
    string C;
};

void solve(std::istream &ist, std::ostream &ost)
{
    /* ------- 宣言と入力 ------- */

    string S;
    int Q;

    ist >> S;
    ist >> Q;

    struct TFC Query[Q];

    for (int i = 0; i < Q; i++)
    {
        ist >> Query[i].T;
        if (Query[i].T == 2)
        {
            ist >> Query[i].F;
            ist >> Query[i].C;
        }
    }

    /* ------- 計算 ------- */

    bool mode = true;
    deque<string> deq;

    for (int i = 0; i < S.length(); i++)
    {
        deq.emplace_back(S.substr(i, 1));
    }

    for (int i = 0; i < Q; i++)
    {
        if (Query[i].T == 1)
        {
            mode = !mode;
            continue;
        }
        if ((Query[i].F == 1) ^ mode)
        {
            deq.emplace_back(Query[i].C);
        }
        else
        {
            deq.emplace_front(Query[i].C);
        }
    }

    if (!mode) reverse(deq.begin(), deq.end());
    for (auto it = deq.begin(); it != deq.end(); ++it)
    {
        ost << *it;
    }
    ost << endl;
}

#ifndef WOMAIN
int main()
{
    solve(std::cin, std::cout);
    return 0;
}
#endif
