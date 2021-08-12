#include <bits/stdc++.h>
using namespace std;

int sumOfDigits(int number)
{
    int sum = 0;
    if (number % 2 == 0)
        sum = (number / 2) * (number + 1);
     else sum = (number) * ((number + 1) / 2);
return sum;
}

int main()
{
    int x;
    cin >> x;
    int temp=x;
    int height = 0;
    int i = 1;
    while (x > 0)
    {
        x -= sumOfDigits(i);
        i++;
        if(x>=0)
         height++;
    }
    cout<<height<<endl;
    return 0;
}
