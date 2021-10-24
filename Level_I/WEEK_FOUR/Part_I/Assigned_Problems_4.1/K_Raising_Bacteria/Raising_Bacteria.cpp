#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, ret = 0;
    cin >> x;
    while (x)
    {
        if (x % 2 != 0)
            ret++;
        x /= 2;
    }
    cout << ret;

    return 0;
}