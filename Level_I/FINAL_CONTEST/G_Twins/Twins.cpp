#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, arr[105], sum = 0, sum_last = 0, cnt = 0, i = 1;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    sort(arr, arr + t);
    while (sum >= sum_last)
    {
        if (i >! t)
        {
            sum_last += arr[t - i];
            sum -= sum_last;
            cnt++;
            i++;
        }
    }
    cout << cnt;

    return 0;
}