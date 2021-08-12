#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n)
    {
        int spaces = n - 1;
        int stars = 1;
        int i;
        for (i = 1; i <= spaces; i++)
            cout << " ";
        spaces--;

        int start = i, dir = -1;
        for (int j = 1; j <= stars; j++)
        {
            cout << start;

            if (start == 1)
                dir += 1;
            start += dir;
        }
        start += 2;

        if (i<n)
            cout << endl;

        n--;
    }

    return 0;
}