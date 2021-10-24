#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, a;
    cin >> n >> m >> a;
    long long  lenght = 0, width = 0;

    if (n == m && m == a)
        cout << 1;
    else
    {
        if (n % a != 0)
            lenght = (n / a) + 1;
        else
            lenght = (n / a);

        if (m % a != 0)
            width = (m / a) + 1;
        else
            width = (m / a);

        cout << lenght * width;
    }

    return 0;
}