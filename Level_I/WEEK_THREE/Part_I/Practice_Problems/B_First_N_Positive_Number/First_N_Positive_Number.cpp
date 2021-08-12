#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,x;
    cin>>n;
    
    for(int j=0;j<n;j++)
    {
        int i=1;
        cin>>x;
        if(x<=0)
            cout<<"invalid";
        while(i<=x)
        {
            cout<<i<<" ";
            i++;
        }
        cout<<endl;     
    }

    return 0;
}