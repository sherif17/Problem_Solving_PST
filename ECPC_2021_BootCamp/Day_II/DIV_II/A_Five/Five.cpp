#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    int a = 0, b = 0;
    long long  result = 0;
    result = pow(5, n);
    if (result > 99)
    {
        a = result % 10;
        b = (result / 10) % 10;
        cout << b << a << endl;
    }
    else if(result<10){
        cout<<result;
    }
    else
        cout<<result<<endl;

    return 0;
}