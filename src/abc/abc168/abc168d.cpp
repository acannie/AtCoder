#include <bits/stdc++.h>
using namespace std;

struct node
{
    vector<int> child;
    bool visited = false;
    int parent;
};

void solve(std::istream &ist, std::ostream &ost)
{
    /* ------- 宣言と入力 ------- */

    int N, M;
    ist >> N >> M;

    vector<int> A;
    vector<int> B;

    for (int i = 0; i < M; i++)
    {
        int input1, input2;
        ist >> input1 >> input2;
        A.emplace_back(input1);
        B.emplace_back(input2);
    }

    /* ------- 計算 ------- */

    vector<struct node *> room;

    for(int i = 0; i < N; i++) {
        struct node *tmp = new struct node();
        room.emplace_back(tmp);
    }

    for (int i = 0; i < M; i++)
    {
        room.at(A.at(i) - 1)->child.emplace_back(B.at(i) - 1);
        room.at(B.at(i) - 1)->child.emplace_back(A.at(i) - 1);
    }

    queue<int> q;
    int now;
    q.push(0);
    room.at(0)->visited = true;

    while (!q.empty())
    {
        now = q.front();
        
        for (auto it = room.at(now)->child.begin(); it != room.at(now)->child.end(); it++)
        {
            if (!room.at(*it)->visited)
            {
                q.push(*it);
                room.at(*it)->parent = now;
                room.at(*it)->visited = true;
            }
        }
        q.pop();
    }

    for (int i = 1; i < N; i++)
    {
        if (!room.at(i)->visited)
        {
            ost << "No" << endl;
            return;
        }
    }

    ost << "Yes" << endl;

    for (int i = 1; i < N; i++)
    {
        ost << room.at(i)->parent + 1 << endl;
    }
}

#ifndef WOMAIN
int main()
{
    solve(std::cin, std::cout);
    return 0;
}
#endif
