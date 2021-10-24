#include <bits/stdc++.h>
using namespace std;
int arr[105];
int main()
{
    int n, k, m, sum = 0;
    cin >> n >> k >> m;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    int x = (n * m) - sum;

    if (x > k)
    {
        cout << -1 << endl;
    }
    else if (x < 0)
    {
        cout << 0 << endl;
    }
    else
        cout << x << endl;

    return 0;
}