#include <bits/stdc++.h>
using namespace std;

typedef struct TFC
{
    int T;
    int F;
    string C;
};

void solve(std::istream& ist, std::ostream& ost)
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

    for (int i = 0; i < Q; i++)
    {
        if (Q_uery[i].T == 1)
        {
            mode != mode;
        }
        else
        {
            if (Q_uery[i].F == 1 && mode == true)
            {
                S = Q_uery[i].C + S;
            }
            else if (Q_uery[i].F == 1 && mode == false)
            {
                S = S + Q_uery[i].C;
            }
            else if (Q_uery[i].F == 2 && mode == true)
            {
                S = S + Q_uery[i].C;
            }
            else if (Q_uery[i].F == 2 && mode == false)
            {
                S = Q_uery[i].C + S;
            }
        }
    }

    if (mode == true)
    {
        ost << S << endl;
    }
    else
    {
        int len = S.length();
        for (int i = 0; i < len; i++)
        {
            ost << S[len - 1 - i];
        }
        ost << endl;
    }
}

#ifdef WIMAIN
int main()
{
    solve(std::cin, std::cout);
    return 0;
}
#endif

