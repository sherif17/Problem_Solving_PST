#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, z;
    cin >> s >> z;

    reverse(s.begin(), s.end());
    //cout << s;
    if (s == z)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}