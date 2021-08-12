#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int spaces = n - i;
        int stars = 2*i + 1;
        for (int j = 0; j < spaces; j++)
            cout << " ";
        spaces--;
        for (int j = 0; j < stars; j++)
            cout << "*";
        cout<<endl;    
    }

    return 0;
}
/