#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x1,x2,x3,x4;
    cin>>x1>>x2>>x3>>x4;
    cout<<min(x1,min(x2,min(x3,x4)));

    return 0;
}