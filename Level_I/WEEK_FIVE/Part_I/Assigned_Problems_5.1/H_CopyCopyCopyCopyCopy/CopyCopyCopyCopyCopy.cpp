#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int arr[N];

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
        sort(arr, arr + n);
        arr[n] = -1;
        int res = 0;
        for (int i = 0; i < n; i++)
        {
            res += (arr[i] != arr[i + 1]);
        }
        cout << res << endl;
    }

    return 0;
}