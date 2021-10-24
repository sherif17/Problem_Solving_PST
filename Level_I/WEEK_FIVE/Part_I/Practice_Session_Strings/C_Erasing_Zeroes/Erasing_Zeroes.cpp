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
        while (!s.empty() && s.back() == '0')
        {
            s.pop_back();
        }
        bool flag = false;
        int res = 0;
        for (auto i : s)
        {
            if (i == '1')
                flag = true;
            if (flag && i == '0')
                res++;
        }

        cout << res << endl;
    }

    return 0;
}