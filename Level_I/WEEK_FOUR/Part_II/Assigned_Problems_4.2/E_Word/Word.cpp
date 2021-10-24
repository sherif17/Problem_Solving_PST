#include <bits/stdc++.h>
using namespace std;

string toLowers(string s)
{
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = (s[i] - 'A') + 'a';
        }
    }
    return s;
}

string toUppers(string s)
{
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = (s[i] - 'a') + 'A';
        }
    }
    return s;
}

int main()
{
    string s;
    int upCount=0, lowCount=0;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            lowCount++;
        else
            upCount++;
    }
    if (lowCount >= upCount)
        cout << toLowers(s);
    else
        cout << toUppers(s);

    return 0;
}