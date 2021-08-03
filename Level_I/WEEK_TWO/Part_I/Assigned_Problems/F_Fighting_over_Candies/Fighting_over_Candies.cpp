#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int maxNumber=0;
    maxNumber = max(a, max(b, c));
    if ((a + b + c) - maxNumber == maxNumber)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}