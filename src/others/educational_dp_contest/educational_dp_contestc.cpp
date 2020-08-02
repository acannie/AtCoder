#include <bits/stdc++.h>
using namespace std;

int max_abc(int a, int b, int c)
{
    return max(max(a, b), c);
}

void solve(std::istream &ist, std::ostream &ost)
{
    /* ------- 宣言と入力 ------- */

    int N;
    ist >> N;

    vector<int> a;
    vector<int> b;
    vector<int> c;

    for (int i = 0; i < N; i++)
    {
        int input_a, input_b, input_c;
        ist >> input_a >> input_b >> input_c;
        a.emplace_back(input_a);
        b.emplace_back(input_b);
        c.emplace_back(input_c);
    }

    /* ------- 計算 ------- */

    vector<int> dp_a;
    vector<int> dp_b;
    vector<int> dp_c;

    dp_a.emplace_back(a.at(0));
    dp_b.emplace_back(b.at(0));
    dp_c.emplace_back(c.at(0));

    for (int i = 1; i < N; i++)
    {
        dp_a.emplace_back(a.at(i) + max(dp_b.at(i - 1), dp_c.at(i - 1)));
        dp_b.emplace_back(b.at(i) + max(dp_c.at(i - 1), dp_a.at(i - 1)));
        dp_c.emplace_back(c.at(i) + max(dp_a.at(i - 1), dp_b.at(i - 1)));
    }

    ost << max_abc(dp_a.at(N - 1), dp_b.at(N - 1), dp_c.at(N - 1)) << endl;
}

#ifndef WOMAIN
int main()
{
    solve(std::cin, std::cout);
    return 0;
}
#endif
