#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int sz = s.size();
        if (sz > 10)
        {
            int ans = (sz - 2);
            cout << s[0] << ans <<s[sz - 1] << endl;
        }
        else
            cout << s << endl;
    }

    return 0;
}