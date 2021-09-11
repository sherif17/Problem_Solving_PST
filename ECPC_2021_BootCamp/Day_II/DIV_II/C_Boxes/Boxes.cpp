#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a,maxi=0,count=1;
    while(n--){
        cin>>a;
        if(a>maxi){
            maxi=a;
        }
        else if(a==maxi)
        {
            count++;

        }
    }

    cout<<(max(count,1))<<endl;
    return 0;
}