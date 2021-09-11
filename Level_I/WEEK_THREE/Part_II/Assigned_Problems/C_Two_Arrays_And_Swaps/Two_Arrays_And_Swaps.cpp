#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        int min = INT8_MAX;
        int max = 0;

        cin >> n >> k;

        int minArr[30];
        int arrOne[30];

        int maxArr[30];
        int arrTwo[30];

        int cntone = 0;
        int cntTwo = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> arrOne[i];
            //if (arrOne[i] < min){
                min = arrOne[i];
                minArr[cntone] = i;
                cntone++;
            //}
        }

        for (int j = 0; j < n; j++)
        {
            cin >> arrTwo[j];
            if (arrTwo[j] > max)
            {
                max = arrTwo[j];
                maxArr[cntTwo] = j;
                cntTwo++;
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << arrOne[i];
        }
        cout << endl;
        int temp = 0;
        for (int x = k; x > 0; x--)
        {
            temp = arrTwo[maxArr[x]];
            arrTwo[maxArr[x]] = arrOne[minArr[x]];
            arrOne[minArr[x]] = temp;
        }
        for (int i = 0; i < n; i++)
        {
            cout << arrOne[i];
        }
    }

    return 0;
}
// some problems withs test cases