#include <bits/stdc++.h>
using namespace std;

vector<int> understanding(vector<bool> toBuy, vector<vector<int>> A, int N, int M)
{
    vector<int> ans;
    for (int i = 0; i < M; i++)
    {
        ans.emplace_back(0);
    }

    for (int i = 0; i < N; i++)
    {
        if (toBuy.at(i))
        {
            for (int j = 0; j < M; j++)
            {
                ans.at(j) += A.at(i).at(j);
            }
        }
    }

    return ans;
}

int getCost(vector<int> C, int N, vector<bool> toBuy)
{
    int ans = 0;
    for (int i = 0; i < N; i++)
    {
        if (toBuy.at(i))
        {
            ans += C.at(i);
        }
    }
    return ans;
}

bool canUnderstand(vector<int> understand, int M, int X)
{
    for (int i = 0; i < M; i++)
    {
        if (understand.at(i) < X)
        {
            return false;
        }
    }

    return true;
}

void helper(int N, int i, vector<bool> toBuy, vector<int> C, vector<vector<int>> A, int M, int X, int &min_cost)
{
    if (i == N)
    {
        if (canUnderstand(understanding(toBuy, A, N, M), M, X))
        {
            min_cost = min(min_cost, getCost(C, N, toBuy));
        }
        return;
    }

    toBuy.at(i) = true;
    helper(N, i + 1, toBuy, C, A, M, X, min_cost);

    toBuy.at(i) = false;
    helper(N, i + 1, toBuy, C, A, M, X, min_cost);
}

void solve(std::istream &ist, std::ostream &ost)
{
    /* ------- 宣言と入力 ------- */

    int N, M, X;
    ist >> N >> M >> X;

    vector<int> C;
    vector<vector<int>> A;

    for (int i = 0; i < N; i++)
    {
        int input_C;
        ist >> input_C;
        C.emplace_back(input_C);

        A.emplace_back(0);
        for (int j = 0; j < M; j++)
        {
            int input_A;
            ist >> input_A;
            A.at(i).emplace_back(input_A);
        }
    }

    /* ------- 計算 ------- */

    int min_cost = INT_MAX;
    vector<bool> toBuy;
    for(int i= 0; i<N;i++){
        toBuy.emplace_back(0);
    }

    helper(N, 0, toBuy, C, A, M, X, min_cost);

    if (min_cost == INT_MAX)
    {
        ost << "-1" << endl;
        return;
    }

    ost << min_cost << endl;
}

#ifndef WOMAIN
int main()
{
    solve(std::cin, std::cout);
    return 0;
}
#endif
