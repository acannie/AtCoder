#include <bits/stdc++.h>
using namespace std;

void solve(std::istream& ist, std::ostream& ost)
{
    int a, b, c;
    string s;
    
    //hundle input
    ist >> a;

    ist >> b >> c;

    ist >> s;
    
    int sum = a + b + c;

    ost << sum << " " << s << endl;
}

#ifdef WIMAIN
int main()
{
    solve(std::cin, std::cout);
    return 0;
}
#endif
