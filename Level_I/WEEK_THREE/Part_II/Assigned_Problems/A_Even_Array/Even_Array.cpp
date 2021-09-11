#include <bits/stdc++.h>
using namespace std;

bool checkIsGood(int arr[], int len)
{
    bool isGood = 1;
    for (int i = 0; i < len; i++)
    {
        if (arr[i] % 2 != i % 2)
            isGood = 0;
    }
    return isGood;
}

int Swaping(int arr[], int n)
{
    bool swapingFlag = 0;
    int counter = 0; // 1 0 1

    for (int i = 0; i < n; i++) // 0 >> 1 ,
    {
        //  1              0
        if (arr[i] % 2 != i % 2) // yess,
        {
            int temp = 0;
            for (int j = 0; j < n; j++) //0
            {
                swapingFlag = 1;
                // 1                0-1        0                0
                if ((arr[i] % 2 == j % 2) && (arr[j] % 2 == i % 2) && (arr[i] != j) && (arr[j] != i))
                {
                    //2
                    temp = arr[j];
                    //3
                    arr[j] = arr[i];
                    //2
                    arr[i] = temp;

                    counter += 1;
                    // [2 3 7 6]
                    if (checkIsGood(arr, n) == 1)
                        break;

                    /*  for (int k = 0; k < n; k++)
                    {
                        cout << arr[k];
                    }
                    cout << endl
                         << counter << endl;*/
                }
            }
        }
        /*if (checkIsGood(arr, n) == 1)
            break;*/
    }
    //cout<<endl<<counter<<endl;
    //int x= counter;
    return (swapingFlag == 1 && counter == 0) ? -1 : (swapingFlag == 0 && counter == 0) ? 0
                                                                                        : counter;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int len, arr[1000];
        cin >> len;
        for (int i = 0; i < len; i++)
        {
            cin >> arr[i];
        }
        cout << Swaping(arr, len) << endl;
    }

    return 0;
}
// some cases failed