#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int result;
    int lastDigit;
    for(int i=k; i>0;i--)//4//3//2//1//0
    {
        // 512//511//510//51
        lastDigit=n%10; //2//1//0//1
        if(lastDigit!=0)
        {
            //result=n-1;
            n--;//511//510//50
        }
        else{
            n/=10;//51
        }

    }
    cout<<n;

    return 0;
}