#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int spaces = n - 1;
    for (int i = 0; i < 2 * n - 1; i++)
    {
        int stars = 1,dir=-1;

        if(i==n)
            dir=-dir;
        //spaces
        

        for (int j = 0; j < spaces; j++)
            cout << " ";
        spaces+=dir;

        for (int j = 0; j< stars; j++)
            cout << "*";
        
        stars+=2*i-dir;     

         cout<<endl;   
    }

    return 0;
}
//  not completed yet//