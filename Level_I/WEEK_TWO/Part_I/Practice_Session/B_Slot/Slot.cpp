#include <bits/stdc++.h>
using namespace std;

int main()
{
    char a,b,c;
    cin >>a>>b>>c;
    /*
    if(a==b && b==c)
    cout<<"Won";
    else
    cout<<"Lost";
    */
    cout<<((a==b && b==c)?"Won":"Lost");

    return 0;
}