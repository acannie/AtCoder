#include <bits/stdc++.h>
using namespace std;

char get_win_symbol(char symbol)
{
    if (symbol == 'r')
    {
        return 'p';
    }

    if (symbol == 'p')
    {
        return 's';
    }

    if (symbol == 's')
    {
        return 'r';
    }
}

int get_winning_score(int R, int S, int P, char symbol)
{
    if (symbol == 'r')
    {
        return R;
    }

    if (symbol == 's')
    {
        return S;
    }
    
    if (symbol == 'p')
    {
        return P;
    }
}

int main()
{
    int N, K;
    int R, S, P;
    string T;

    cin >> N >> K;
    cin >> R >> S >> P;
    cin >> T;

    int score = 0;
    string Tlog;

    for (int i = 0; i < N; i++)
    {
        char win_symbol = get_win_symbol(T[i]);
        if (i < K || Tlog[i - K] != win_symbol)
        {
            score += get_winning_score(R, S, P, win_symbol);
            Tlog += win_symbol;
        }
        else
        {
            Tlog += "x";
        }
    }

    cout << score << endl;

    return 0;
}
