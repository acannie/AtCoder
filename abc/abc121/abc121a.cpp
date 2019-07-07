#include <iostream>
using namespace std;

int main()
{
    int H, W;
    int h, w;

    cin >> H >> W;
    cin >> h >> w;

    int white = H * W - (h * W + w * (H - h));

    cout << white << endl;

    return 0;
}