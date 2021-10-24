#include <bits/stdc++.h>
using namespace std;

int reverseNumber(int n){// 3456
    int res=0;
    while(n){
        res=(res*10)+(n%10);
        n/=10;
    }
    return res;
}
int main()
{
    int n;
    cin>>n;
    while(n--){
        int x1,x2;
        cin>>x1>>x2;
        cout<<reverseNumber((reverseNumber(x1)+reverseNumber(x2)))<<endl;  
    }
    //cout<<reverseNumber(n);

    return 0;
}