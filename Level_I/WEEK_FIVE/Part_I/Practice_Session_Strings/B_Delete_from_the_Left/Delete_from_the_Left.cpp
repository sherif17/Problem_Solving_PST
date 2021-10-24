#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    while (!a.empty() && !b.empty() && a.back() == b.back())
    {
        a.pop_back();
        b.pop_back();
    }
    cout << a.size() + b.size();

    return 0;
}