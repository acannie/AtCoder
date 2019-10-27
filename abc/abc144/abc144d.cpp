#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a, b, x;

    cin >> a >> b >> x;

    double siiita;

    double kara_V = a * a * b - x;

    double ue_V = kara_V;

    double sita_V = x - ue_V;

    double d = sita_V / (a * a);
    double c = b - d;

    double tan_atai = c / a;

    siiita = atan(tan_atai);

    double ans = (double)siiita  * (double)180/ M_PI;

    cout << ans << endl;
    return 0;
}