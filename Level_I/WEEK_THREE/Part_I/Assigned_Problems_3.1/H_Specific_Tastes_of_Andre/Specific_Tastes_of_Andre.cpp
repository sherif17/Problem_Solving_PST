#include <bits/stdc++.h>
using namespace std;

int sumOfArray(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int checkPerfectArray(int arr[], int n)
{
    int flag = 0, i = n, count = 0;
    while (i > 0)
    {
        /*int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
        }*/
        if (sumOfArray(arr, n) % n == 0)
        {
            flag = 1;
            count++;
        }

        i--;
    }
    return (count == n) ? 1 : 0;
}

int main()
{
    int n;
    cin >> n;
    int q, arr[10000];
   /* for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int result = checkPerfectArray(arr, n);
    cout << result << endl;
    */
    while (n--)
    {
        cin >> q;
        for (int j = 0; j < q; j++)
        {
            for (int i = 1; i <= 100; i++)
            {
                // 4 4 4
                arr[j] = i;
                if (sumOfArray(arr, q) % q == 0 && checkPerfectArray(arr, q))
                    break;
            }
        }
        for (int i = 0; i < q; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
/// fadel 7tet eny a check 3la en array tb2a perfect