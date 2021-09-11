#include <bits/stdc++.h>
using namespace std;

int arr[105];
int main()
{
    int n, m;
    cin >> n >> m;
    int l, r;
    for (int i = 0; i < n; i++)
    {
        cin >> l >> r;
        for (int j = l; j <= r; j++)
        {
            arr[j] = 1;
        }
    }
    int cnt = 0;
    for (int i = 1; i <= m; i++)
    {
        if (arr[i] == 0)
            cnt++;
    }
    cout<<cnt<<'\n';
    for(int i=1;i<=m;i++){
         if (arr[i] == 0)
            cout<<i<<" ";
    }


    return 0;
}