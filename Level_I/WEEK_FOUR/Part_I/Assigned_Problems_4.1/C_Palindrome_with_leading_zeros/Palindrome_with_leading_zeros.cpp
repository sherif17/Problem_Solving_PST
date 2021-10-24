#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(string n)
{
    int sz = n.size();
    for (int i= 0; i < (sz / 2) ; i++)
    {
        if (n[i] != n[sz - i - 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string s;
    cin >> s;

    while (checkPalindrome(s) == false && s.size() <= 19)
    {
        s = '0' + s;
    }
    if (checkPalindrome(s) == true)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}