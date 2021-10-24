#include <bits/stdc++.h>
using namespace std;

int arr[10005];
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, odd = 0, even = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] % 2 == 0)
                even++;
            else
                odd++;
        }
        if (n % 2 == 0)
        {
            if (odd != even)
                cout << -1 << endl;
            else
            {
                int ans = 0;
                for (int i = 0; i < n; i++)
                {
                    if (arr[i] % 2 != 0 && i % 2 == 0)
                        ans++;
                }
                cout << ans << endl;
            }
        }
        else
        {
            if (even - odd != 1)
                cout << -1 << endl;
            else
            {
                int ans = 0;
                for (int i = 0; i < n; i++)
                {
                    if (arr[i] % 2 != 0 && i % 2 == 0)
                        ans++;
                }
                cout << ans << endl;
            }
        }
    }

    return 0;
}