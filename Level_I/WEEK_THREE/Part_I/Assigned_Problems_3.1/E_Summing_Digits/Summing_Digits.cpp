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

int lenghtOfNumber(int n)
{
    int lenght = 0;
    while (n > 0)
    {
        n /= 10;
        lenght++;
    }
    return lenght;
}

int main()
{
    long long n;
    int result=0;
    while (true)
    {
        cin >> n;
        if (n == 0)
            break;
        else
        {
            result = sumOfDigits(n);
            if(lenghtOfNumber(result==1))
                cout<<result;
            else 
                while(lenghtOfNumber(result)>1){
                result = sumOfDigits(result);
                }
        }
        cout << result << endl;
    }
    return 0;
}