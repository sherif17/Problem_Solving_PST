#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, p, k;
    cin >> n >> p >> k;

    if ((p - k > 1))
        cout << "<<"
             << " ";

    for (int i = k; i > 0; i--)
    {
        if (p - i > 0)
            cout << (p - i) << " ";
    }
    cout << "(" << p << ")";
    for (int i = 1; i <= k; i++)
    {
        if ((p + i) > n)
            break;
        cout << " " << (p + i);
    }
    if (p + k < n)
        cout << " "
             << ">>";

            return 0;
}