#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a != b && a != c && b != c)
        cout << 3;
    else if (a == b && b == c)
        cout << 1;
    else
        cout << 2;
    return 0;
}