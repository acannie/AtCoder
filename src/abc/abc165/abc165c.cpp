#include <bits/stdc++.h>
using namespace std;

typedef struct abcd
{
    int a;
    int b;
    int c;
    int d;
};

void generate(vector<vector<int>> &patterns, vector<int> p, int initial, int loopCount, int M)
{
    if (loopCount == 0)
    {
        patterns.emplace_back(p);
        return;
    }

    for (int i = initial; i <= M; i++)
    {
        p.emplace_back(i);
        generate(patterns, p, i, loopCount - 1, M);
        p.pop_back();
    }
}

void solve(std::istream &ist, std::ostream &ost)
{
    /* ------- 宣言と入力 ------- */

    int N, M, Q;
    ist >> N >> M >> Q;

    vector<struct abcd> ABCD;

    for (int i = 0; i < Q; i++)
    {
        int a, b, c, d;
        ist >> a >> b >> c >> d;

        struct abcd new_abcd;
        ABCD.emplace_back(new_abcd);
        ABCD[i].a = a;
        ABCD[i].b = b;
        ABCD[i].c = c;
        ABCD[i].d = d;
    }

    /* ------- 計算 ------- */

    vector<vector<int>> patterns;
    vector<int> prefix;
    generate(patterns, prefix, 1, N, M);

    long long max_score = 0;

    for (auto A : patterns)
    {
        long long score = 0;
        for (int q = 0; q < Q; q++)
        {
            if (A[ABCD[q].b - 1] - A[ABCD[q].a - 1] == ABCD[q].c)
            {
                score += ABCD[q].d;
            }
        }
        max_score = max(max_score, score);
    }

    ost << max_score << endl;
}

#ifndef WOMAIN
int main()
{
    solve(std::cin, std::cout);
    return 0;
}
#endif
