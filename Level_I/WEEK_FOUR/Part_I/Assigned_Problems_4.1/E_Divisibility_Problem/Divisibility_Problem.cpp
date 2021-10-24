#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, cnt = 0;
        cin >> a >> b;
        while (a != b)
        {
            if (a % b == 0)
            {
                //cout << 0;
                break;
            }
            a += 1;
            cnt++;
        }
        cout << cnt << endl;
    }

    return 0;
}