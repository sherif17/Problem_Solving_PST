#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,x;
    cin>>n;
    int sum1=0;
    int sum2=0;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>x;
            if(i==j)
                sum1+=x;
            if((j + i) == n - 1)
            sum2+=x;    

        }
    
    }
    cout<<sum1<<" "<<sum2<<endl;

    return 0;
}