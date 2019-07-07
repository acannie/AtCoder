#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    int A, B, C, D;
    string S;

    cin >> N >> A >> B >> C >> D;
    cin >> S;

    bool able;

    if (C < D)
    {
        able = true;

        for (int i = B; i < D - 2; i++)
        {
            if ((S[i] == '#') && (S[i + 1] == '#'))
            {
                able = false;
            }
        }
        S[D - 1] = '#';

        for (int i = A; i < C - 2; i++)
        {
            if ((S[i] == '#') && (S[i + 1] == '#'))
            {
                able = false;
            }
        }
    }
    else if (D < C)
    {
        /*
        //patern1

        bool able1 = true;

        for (int i = B; i < D - 2; i++)
        {
            if ((S[i] == '#') && (S[i + 1] == '#'))
            {
                //注意
                able = false;
                break;
            }
        }

        S[D - 1] = '#';

        for (int i = A; i < C - 2; i++)
        {
            if ((S[i] == '#') && (S[i + 1] == '#'))
            {
                able1 = false;
                break;
            }
        }

        //patern2

        bool able2 = true;
        S[D - 1] = '.';
        S[B - 1] = '#';

        for (int i = A; i < C - 2; i++)
        {
            if ((S[i] == '#') && (S[i + 1] == '#'))
            {
                able2 = false;
                break;
            }
        }

        for (int i = B; i < D - 2; i++)
        {
            if ((S[i] == '#') && (S[i + 1] == '#'))
            {
                able2 = false;
            }
        }

        //result
        if ((able1 == true) || (able2 == true))
        {
            able = true;
        }
        else
        {
            able = false;
        }
        */

        able = true;

        for (int i = A; i < C - 2; i++)
        {
            if ((S[i] == '#') && (S[i + 1] == '#'))
            {
                able = false;
                break;
            }
        }

        if (able == true)
        {
            able = false;
            for (int i = B - 2; i < D - 1; i++)
            {
                if ((S[i] == '.') && (S[i + 1] == '.') && (S[i + 2] == '.'))
                {
                    able = true;
                    //break;
                }
            }
        }
    }

    if (able == true)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}