#include <bits/stdc++.h>
using namespace std;

long long fact(int x)
{
    if (x <= 1)
        return 1;
    else
        return x * fact(x - 1);
}

int main()
{
    int x;
    cin >> x;
    int cnt = 0;
    for (int i = 10; i >= 1; i--)
    {
        int f = fact(i);

        while (x >= f)
        {
            x -= f;
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}