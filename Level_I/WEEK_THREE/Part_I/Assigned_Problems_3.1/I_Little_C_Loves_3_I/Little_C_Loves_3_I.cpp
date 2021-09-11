#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[] = {0, 0, 0};
    int remaind = n % 3;
    //for (int i = 0; i < 3; i++){
    int i = 0;
    for (int j = 1; j <= (n / 3); j++)
    {
        if (j % 3 != 0)
            arr[i] = j;

        if (j == (n / 3))
        {
            i++;
            j = 0;
        }
        if (i == 3)
            break;
    }
    //}
    cout << arr[0] << " " << arr[1] << " " << arr[2] << endl;

    do
    {
        // if ((arr[0] + arr[1] + arr[2]) < n )
        //{
        if (remaind == 1)
        {
            cout << "hi";
            if ((arr[0] + remaind) % 3 != 0)
                arr[0] += remaind;
            else if ((arr[1] + remaind) % 3 != 0)
                arr[1] += remaind;
            else if ((arr[2] + remaind) % 3 != 0)
                arr[2] += remaind;
        }
        else if (remaind == 2)
        {
            if(((arr[0] + 1) % 3 != 0) && ((arr[1] + 1) % 3 != 0)){
                arr[0] += 1;
                arr[1] += 1;
            }
            else if(((arr[0] + 1) % 3 != 0) && ((arr[2] + 1) % 3 != 0))
            {
                arr[0] += 1;
                arr[2] += 1;
            }
            else if(((arr[1] + 1) % 3 != 0) && ((arr[2] + 1) % 3 != 0))
            {
                arr[1] += 1;
                arr[2] += 1;
            }

        }

        // }
        //2     1         1
    } while ((arr[0] + arr[1] + arr[2]) < n);

    cout << arr[0] << " " << arr[1] << " " << arr[2];

    return 0;
}