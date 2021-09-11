#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[1005];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    //[1 2 4 5 10]

    for (int i = 0; i < n; i++) //1//2
    {
        if (a-] % 2 == 0)
        {
            for (int j = 0; j < n; j++)
            {
                if (arr[i] == arr[j])
                {
                    if (arr[j] %2 == 0)
                    {
                        arr[j] = arr[i] - 1;//[1 2 4 5 10]

                    }   //arr[j] = arr[i] + 1;
                    /*else
                        */
                    break;
                }
            }
        }
        else //1
        {
            for (int j = 0; j < n; j++)
            {       //1       //1//2
                if (arr[i] == arr[j])
                {
                    if (arr[j] % 2 != 0)//odd
                        //2
                        arr[j] = arr[j] + 1; //[2 2 4 5 10]
                    //break;
                    /*else
                        arr[j] = arr[i] - 1;*/
                }
            }
        }

        cout << arr[0] << arr[1] << arr[2] << arr[3] << arr[4] << endl;
        //break;
    }

    /* for (int i = 0; i < n; i++)
    {
        cout<<arr[i];
    }
*/
    return 0;
}
