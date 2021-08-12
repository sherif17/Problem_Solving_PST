#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int totalYears=0;
    while(a<=b){//4 9
        a*=3;//12//36
        b*=2;//18//36
        totalYears++;//1//2
    }
    cout<<totalYears;
    return 0;
}