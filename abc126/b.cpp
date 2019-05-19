#include <iostream>
#include <string>
using namespace std;

int main()
{
    string S;

    cin >> S;

    bool MM1, MM2;

    if ((S[0] == '0') && (S[1] != '0'))
    {
        MM1 = true;
    }
    else if ((S[0] == '1') && ((S[1] == '0') || (S[1] == '1') || (S[1] == '2')))
    {
        MM1 = true;
    }
    else
    {
        MM1 = false;
    }

    if (S[2] == '0' && (S[3] != '0'))
    {
        MM2 = true;
    }
    else if ((S[2] == '1') && ((S[3] == '0') || (S[3] == '1') || (S[3] == '2')))
    {
        MM2 = true;
    }
    else
    {
        MM2 = false;
    }

    string outstring;

    if ((MM1 == false) && (MM2 == true))
    {
        cout << "YYMM" << endl;
    }
    else if ((MM1 == true) && (MM2 == false))
    {
        cout << "MMYY" << endl;
    }
    else if ((MM1 == true) && (MM2 == true))
    {
        cout << "AMBIGUOUS" << endl;
    }
    else if ((MM1 == false) && (MM2 == false))
    {
        cout << "NA" << endl;
    }

    return 0;
}