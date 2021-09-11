#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, arr[55], z = 0;
   // cin >> t;
   while (cin >> x && x != 0)
    {
        z++;
        int sum = 0, avg = 0, moves = 0;
        for (int i = 0; i < x; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        avg = sum / x;
        for (int i = 0; i < x; i++)
        {
            if (arr[i] > avg)
            {
                moves += (arr[i] - avg);
            }
        }
        cout << "Set #" << z<<endl;
        cout << "The minimum number of moves is " << moves<<"."<<endl;
        cout<<"\n";
    }
    return 0;
}

