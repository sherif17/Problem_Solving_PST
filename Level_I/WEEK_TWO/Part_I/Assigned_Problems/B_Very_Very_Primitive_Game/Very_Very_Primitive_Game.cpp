#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a > b)
        cout << "Takahashi";
    if (b > a)
        cout << "Aoki";
    if (a == b && c == 0)
        cout << "Aoki";
    else if(a == b && c == 1)
        cout << "Takahashi";
    return 0;
}