#include <bits/stdc++.h>
using namespace std;
const int X = 10e5 + 5;
int arr[X];

bool isTrianglePossible(int arr[], int N)
{
    if (N < 3)
        return 0;
    bool flag = 0;
    sort(arr, arr + N);
    for (int i = 0; i < N - 2; i++)
        if (arr[i] + arr[i + 1] > arr[i + 2])
            flag = 1;
    return flag;
}

int main()
{

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int N = sizeof(arr) / sizeof(int);
    cout<< (isTrianglePossible(arr, N) ? "YES" : "NO");

    return 0;
}