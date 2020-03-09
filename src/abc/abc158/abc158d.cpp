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

    struct TFC Q_uery[Q];

    for (int i = 0; i < Q; i++)
    {
        ist >> Q_uery[i].T;
        if (Q_uery[i].T == 2)
        {
            ist >> Q_uery[i].F;
            ist >> Q_uery[i].C;
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
        if (Q_uery[i].T == 1)
        {
            mode = !mode;
        }
        else
        {
            if ((Q_uery[i].F == 1 && mode) || (Q_uery[i].F == 2 && !mode))
            {
                deq.emplace_front(Q_uery[i].C);
            }
            else if ((Q_uery[i].F == 1 && !mode) || (Q_uery[i].F == 2 && mode))
            {
                deq.emplace_back(Q_uery[i].C);
            }
        }
    }

    if (mode)
    {
        for (auto it = deq.begin(); it != deq.end(); ++it)
        {
            ost << *it;
        }
        ost << endl;
    }
    else
    {
        for (auto it = deq.rbegin(), e = deq.rend(); it != e; ++it)
        {
            ost << *it;
        }
        ost << endl;
    }
}

#ifndef WOMAIN
int main()
{
    solve(std::cin, std::cout);
    return 0;
}
#endif
