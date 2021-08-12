#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k,n,w;
    cin>>k>>n>>w;
    int totalMoney=0;
    for (int i=1;i<=w;i++){
        totalMoney+=i*k;
    }
    cout<<max((totalMoney-n),0);
    return 0;
}