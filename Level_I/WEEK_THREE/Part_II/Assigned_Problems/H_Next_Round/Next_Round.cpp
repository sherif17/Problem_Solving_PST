#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, arr[55], pointer, counter = 0;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (i == k - 1)
            pointer = arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= pointer && arr[i] > 0)
            counter++;
    }
    cout << counter << endl;

    return 0;
}