#include <bits/stdc++.h>
using namespace std;

int sumOfDigits(int n)
{
    int sumDigits = 0;

    while (n > 0)
    {
        sumDigits += n % 10;
        n = n / 10;
    }
    return sumDigits;
}

int main()
{
    int n;
    int result=0;
    cin >> n;
    if (sumOfDigits(n) % 4 == 0)
        cout << n << endl;
    else{
        for(int i=n;;++i){
            if(sumOfDigits(i)%4==0)
            {
                result=i;
                break;
            }
        }
        cout<<result<<endl;
    } 

    return 0;
}