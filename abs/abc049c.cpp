#include <iostream>
#include <string>
using namespace std;

int main()
{
    string S;

    cin >> S;

    string T = "";
      
    string add1 = T + "dream";
    string add2 = T + "dreamer";
    string add3 = T + "erase";
    string add4 = T + "eraser";

    if ((S == add1) || (S == add2) || (S == add3) || (S == add4))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}