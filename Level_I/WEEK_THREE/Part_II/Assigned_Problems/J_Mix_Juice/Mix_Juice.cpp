#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k,sum=0;
    cin >> n >> k;
    int arr[1005];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    for (int i = 0; i < k; i++)
    {
        sum+=arr[i];
    }
    cout<<sum<<endl;

    return 0;
}