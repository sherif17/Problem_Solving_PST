#include<iostream>
using namespace std;

int main(){
    int A,B;

    cin>>A>>B;

    int sumA=0;
    int sumB=0;

    sumA+=A%10;
    A=A/10;
    sumA+=A%10;
    A=A/10;
    sumA+=A%10;

    sumB+=B%10;
    B=B/10;
    sumB+=B%10;
    B=B/10;
    sumB+=B%10;

    cout<<max(sumA,sumB);
    return 0;
}