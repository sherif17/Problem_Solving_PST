#include <iostream>
#include <math.h>
#include<bits/stdc++.h>

using namespace std;

int main()
{



 
    return 0;
}
bool checkIfPrimeOrNot(int num)
{
    bool flag = 0;

    int mod_peak = num / 2;

    if (num == 0 || num == 1)
        flag = 1;
    else
    {
        for (int i = 2; i <= mod_peak; i++)
        {
            if (num % i == 0)
                flag = 1;
            //break;// Not prime
        }
    }
    return flag;
}

int DigitCounter(int num)
{
    int counter;

    while (num != 0)
    {
        num = num / 10;
        counter++;
    }

    return counter;
}

int SumOfDigits(int num)
{
    int digitCount = DigitCounter(num);
    int sum = 0;
    for (int i = 0; i < digitCount; i++)
    {
        sum += num % 10;
        num = num / 10;
    }

    return sum;
}

/*
el matlob 2akal 3adad 5atwat mahma e5talft no3 el 5atwa 1,2,3,4,5.


*/

// mo7awalat 8reba 
// tenf3 ll el steps sabtaa

/**
    int X;
    cin >> X;
    //cout<<DigitCounter(X)<<endl;
    //cout<<SumOfDigits(X)<<endl;

    int result_by_1;
    int result_by_2;
    int result_by_3;
    int result_by_4;
    int result_by_5;

    bool result = checkIfPrimeOrNot(X);
    if (result == 0)
    {
        //prime

        if (X > 5)
        {
            cout << X;
        }
        else
        {
            if (X % 2 == 0) //even
            {
                result_by_2 = X / 2;
                    //result_by_4 = X / 4;
                cout << result_by_2; //min(result_by_2, result_by_4);
            }
            else
            {
                if (X % 5 == 0)
                {
                    result_by_5 = X / 5;
                    cout << result_by_5 << endl;
                }
                else
                {
                    // result_by_1 = X / 1;
                    result_by_3 = X / 3;
                    cout << result_by_3; //min(result_by_1, result_by_3);
                }
            }
        }
    }
    else
    {
        if (X % 2 == 0) //even
        {
            if (X % 10 == 0)
            {
                result_by_5 = X / 5;
                cout << result_by_5 << endl;
            }
            else
            {
                if (SumOfDigits(X) % 3 == 0)
                {
                    result_by_3 = X / 3;
                    result_by_2 = X / 2;
                    result_by_4 = X / 4;

                    int subMin=min(result_by_3,result_by_2);
                    cout<<min(subMin,result_by_4);
                }
                else
                {
                    result_by_2 = X / 2;
                    result_by_4 = X / 4;
                    cout << min(result_by_2, result_by_4);
                }
            }
        }
        else
        {
            if (X % 5 == 0)
            {
                result_by_5 = X / 5;
                cout << result_by_5 << endl;
            }
            else
            {
                result_by_1 = X / 1;
                result_by_3 = X / 3;
                cout << min(result_by_1, result_by_3);
            }
        }
    }
    
*/ 