#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=1 ; i<=n ;i++)
    {
         if(i > 1)
        cout<<"that ";
        if(i%2==0)
        cout<<"I love ";

        else
        cout<<"I hate ";

    }
    cout<<"it";
    return 0;
}