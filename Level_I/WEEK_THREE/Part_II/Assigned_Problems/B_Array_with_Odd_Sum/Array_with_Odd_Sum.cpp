#include <bits/stdc++.h>
using namespace std;

bool checkOddSum(int arr[], int n)
{
    int sum = 0;
    bool odd = 0;
    for (int k = 0; k < n; k++)
        sum += arr[k];
    if (sum % 2 != 0)
        odd = 1;
    return odd;
}

int main()
{
    int t;
    cin >> t;
    int arr[2500];
    while (t--)
    {
        int sum = 0, n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            //cin >> arr[i];
            scanf("%d", &arr[i]);
            sum += arr[i];
        }

        if (sum % 2 != 0)
            cout << "YES" << endl;
        else
        {
            //for (int i = 0; i < n; i++){
            int i = 0,j;                
            for (j = 0; j < n; j++)
                {
                    //cout<<"Hi";
                    // 1    0  
                    if (i != j)
                    {
                        //[426 426]

                        sum-=arr[i];//==426
                        arr[i] = arr[j];
                        sum+=arr[i];

                        //cout<<"Sum : "<<sum<<endl;
                        
                        if (/*checkOddSum(arr, n) == 1*/ sum %2 !=0)
                        {
                            cout << "YES" << endl;
                            break;
                        }
                        else
                        {
                           // cout<<"soooo "<< i<<" "<< n<<endl;
                            //1      2-1 =1
                            if (i == (n - 1))
                            {
                                cout << "NO" << endl;
                                break;

                            }
                                
                        }
                    }
                    // 1    2-1=1
                    if (j == n - 1)
                    {
                        i++;
                        j = -1;
                        //cout<<"done "<<i<<endl;

                    }
                }
               /* if (checkOddSum(arr, n) == 1)
                    break;
                else
                {
                    if (i == n - 1)
                        cout << "NO" << endl;
                }
            }*/
        }
    }
    return 0;
}
// time limit excedd