#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[100];
    int result[100];

    for (int i = 0; i < (n * 2); i++)
    {
        cin >> arr[i];
        i++;
        arr[i] = i;
    }

    for (int i = 0, j = 0; i < (n * 2); i += 2, j++)
    {
        for (int k = 0; k < n; k++)
        {
            if (i == arr[k])
            {
                result[j] = arr[i + 1];
                break;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}