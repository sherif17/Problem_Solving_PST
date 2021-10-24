#include <bits/stdc++.h>
using namespace std;

int sumArray(int arr[], int n)
{
    if (n <= 0)
        return 0;
    return (arr[n - 1] + sumArray(arr, n - 1));
}
int main()
{
    int t, i = 1;
    cin >> t;
    while (t--)
    {
        int arr[1005];
        int n;
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cout << "Case " << i << ":"
             << " " << sumArray(arr, n) << endl;
        i++;
    }

    return 0;
}