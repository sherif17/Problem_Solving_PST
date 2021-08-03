#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int monthsDiffrance=a-1;
    int daysDiffrance=b-1;
    if(daysDiffrance>=monthsDiffrance)
    {
        cout<<monthsDiffrance+1;
    }
    else
    cout<<monthsDiffrance;
    return 0;
}