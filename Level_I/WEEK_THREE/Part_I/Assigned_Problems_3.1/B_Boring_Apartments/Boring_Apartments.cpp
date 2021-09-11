#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int n;

    while (t--)
    {
        cin >> n;
        int numOfDigits=0, last_digit=0;
        last_digit = n % 10;
        while (n > 0)
        {
            n = n / 10;
            numOfDigits++;
        }
        if (numOfDigits == 4)
        {
            cout << 10 * last_digit;
        }
        else if (numOfDigits == 3)
        {
            if (last_digit == 1)
                cout << numOfDigits;
            else
                cout << 10 * (last_digit - 1) + 6;
        }
        else if (numOfDigits == 2)
        {
            if (last_digit == 1)
                cout << numOfDigits;
            else
            cout << (10 * (last_digit - 1)) + 3;
            // 10*(1-1)+3
        }
        else if (numOfDigits == 1)
        {
            cout << 10 * (last_digit - 1) + 1;
        }
        cout<<endl;
    }
    return 0;
}