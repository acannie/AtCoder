#include <bits/stdc++.h>
using namespace std;

void solve(std::istream &ist, std::ostream &ost)
{
    /* ------- 宣言と入力 ------- */

    double A, B, H, M;
    ist >> A >> B >> H >> M;

    /* ------- 計算 ------- */
    double hour_arg = 2 * M_PI / 12;
    double minite_arg = 2 * M_PI / 60;

    double hour_hand = H * hour_arg + M / 60 * hour_arg;
    double minite_hand = M * minite_arg;

    double theta = abs(hour_hand - minite_hand);

    double ans = pow(A, 2) + pow(B, 2) - 2 * A * B * cos(theta);

    ost << fixed << setprecision(15) << (double)sqrt(ans) << endl;
}

#ifndef WOMAIN
int main()
{
    solve(std::cin, std::cout);
    return 0;
}
#endif
