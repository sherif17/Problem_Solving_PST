#include <bits/stdc++.h>
using namespace std;

fab(int n)
{
    if (n <2 )
        return n;
    else
        return fab(n-1)+fab(n-2);
}
int main()
{
    int n;
    cin>>n;
    cout<<fab(n);

    return 0;
}