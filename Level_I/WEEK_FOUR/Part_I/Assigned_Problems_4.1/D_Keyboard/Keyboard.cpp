#include <bits/stdc++.h>
using namespace std;

int main()
{
    char c;
    cin >> c;
    string s;
    cin >> s;
    string key = "qwertyuiopasdfghjkl;zxcvbnm,./";

    for (int i = 0; i < s.size(); i++)
    {
        for (int j = 0; j < key.size(); j++)
        {
            if (key[j] == s[i])
            {
                if (c == 'R')
                {
                    cout << key[j - 1];
                }
                else
                {
                    cout << key[j + 1];
                }
                break;
            }
        }
    }

    return 0;
}