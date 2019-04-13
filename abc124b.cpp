#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int H[N];

    for (int i = 0; i < N; i++)
    {
        cin >> H[i];
    }

    int count = 1;
    
    for (int i = 1; i < N; i++)
    {
        bool visible = true;
        for (int j = 0; j < i; j++)
        {
            if (H[j] > H[i])
            {
                visible = false;
                
            }
        }
        if (visible == true)
        {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}