#include <bits/stdc++.h>
using namespace std;

int main()
{
    char arr[20];
    cin >> arr;
    long long digits = strlen(arr);
    long long ans = 0;
    ans = (1 << digits) - 2;
    for (long long i = digits - 1, count = 0; i >= 0; i--, count++)
    {
        if (arr[i] == '7')
            ans += (1 << count);
    }
    cout << (ans + 1);
    return 0;
}