#include <bits/stdc++.h>
using namespace std;

bool checkAllUpper(string s)
{
    bool isupper = true;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] < 'A' || s[i] > 'Z')
        {
            isupper = false;
            break;
        }
    }
    return isupper;
}

bool checkFirstUpper(string s)
{
    bool var = false;
    if (s[0] >= 'a' && s[0] <= 'z')
    {
        var = true;
        for (int i = 1; i < s.size(); i++)
        {
            if (s[i] < 'A' || s[i] > 'Z')
            {
                var = false;
                break;
            }
        }
    }
    return var;
}
int main()
{
    string s;
    cin >> s;
    if (checkAllUpper(s))
    {
        for (int i = 0; i < s.size(); i++)
        {
            s[i] = s[i] - 'A' + 'a';
        }
        cout << s;
    }
    else if (checkFirstUpper(s))
    {
        s[0] = s[0] - 'a' + 'A';
        for (int i = 1; i < s.size(); i++)
        {
            s[i] = s[i] - 'A' + 'a';
        }
        cout << s;
    }
    else
        cout << s;

    return 0;
}