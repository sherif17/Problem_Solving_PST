#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int sumOfDigits=0;
    if(n%2==0)
        sumOfDigits=(n/2)*(n+1);
    else
        sumOfDigits=n*((n+1)/2);

    cout<<sumOfDigits;

    return 0;
}