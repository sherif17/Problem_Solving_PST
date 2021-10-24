#include <bits/stdc++.h>
using namespace std;

int arr[100009];

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        long long sum = 0, mx = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            sum += arr[i];
            mx = max(sum, mx);
        }

        cout << mx << endl;
    }

    return 0;
}