#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n;
    bool flag = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x == 1)
            flag = 1;
    }
    cout << ((flag == 1) ? "HARD" : "EASY");
    return 0;
}