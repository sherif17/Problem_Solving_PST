#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int total=n;
    
    int arr[100];
    int result[100];

    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }
    int j = 0,k=0;
    while (n>0)
    {
        int count = 0;

        for (int i = arr[j]; i <= n; i++,k++)
        {
            //cout<<"BI";
            result[k] = arr[j];
            count++;
        }
        j++;
        n -= count;

    }

    for (int i = total-1; i >=0; i--)
    {
        cout << result[i]<<" ";
    }
    return 0;
}