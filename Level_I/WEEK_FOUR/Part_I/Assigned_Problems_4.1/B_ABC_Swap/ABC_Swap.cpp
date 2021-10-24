#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int temp = 0;
    temp = b;
    b = a;
    a = temp;
    temp = c;
    c = a;
    a = temp;

    cout << a << " " << b << " " << c << " ";
    return 0;
}