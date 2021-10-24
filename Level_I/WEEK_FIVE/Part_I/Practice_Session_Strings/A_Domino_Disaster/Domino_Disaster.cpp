#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int t;
        string s;
        cin >>t>> s;
        for (int i = 0; i < t; i++)
        {
            if (s[i] == 'U')
                cout << "D";
            else if (s[i] == 'D')
                cout << "U";
            else
                cout << s[i];
        }
        cout<<'\n'; 
    }

    return 0;
}