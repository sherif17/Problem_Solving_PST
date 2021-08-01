#include <iostream>
using namespace std;

int main()
{
    int N;
    cin>>N;
    int sum=0;
    while(N >0){
        sum+=N;
        N--;
    }
    cout<< sum;
    // another solution 
    // cout << N-1;
    return 0;
}