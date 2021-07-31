#include <iostream>
using namespace std;

int main(){

    int X, Y;
    cin>>X>>Y;

    if(X>Y)
    {
        if(X-Y<3)
            cout<<"Yes";
        else
        cout<<"No";    

    }
    else if (Y>X)
    {
         if(Y-X<3)
            cout<<"Yes";
        else
        cout<<"No";  

    }
    else cout<< '0'; 
    return 0;
}