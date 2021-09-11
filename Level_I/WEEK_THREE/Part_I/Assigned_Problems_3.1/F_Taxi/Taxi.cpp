#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, arr[1000000];
    cin >> n;
    int countFour = 0, countThree = 0, countTwo = 0, countOne = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 4)
        {
            countFour++;
        }
        else if (arr[i] = 3)
        {
            countThree++;
        }
        else if (arr[i] = 2)
        {
            countTwo++;
        }
        else
            countOne++;
    }
    if (abs(countThree - countOne) == 0)
    {
        countFour += countThree;
        if (countTwo % 4 == 0)
        {
            countFour += (countTwo / 4);
            cout << countFour;
        }
        else
        {
            countFour += ((countTwo / 4) + (countTwo % 4));
            cout << countFour;
        }
    }
    else if ((countThree - countOne) > 0)
    {
        countFour += countOne;
        countThree -= countOne;
        if (countTwo % 4 == 0)
        {
            countFour += (countTwo / 4);
            cout << countFour + countThree;
        }
        else
        {
            countFour += ((countTwo / 4) + (countTwo % 4));
            cout << countFour + countThree;
        }
    }
    else if ((countThree - countOne) < 0)
    {
        countFour += countThree;
        countOne -= countThree;

        if(abs(countTwo - 2*countOne)==0)
        {
            countFour +=countTwo;
        }
        else if((countTwo - 2*countOne>0)){

        }
    }
// lesa mo4 kamlaa




    /*  int q,carCount=0;
    while (n--)//5
    {
        int sum=0;
        cin >> q;//1//2//4//3//3
        if ((sum +q) <= 4)//1//3//6//9
        {   
            sum += q;//1//3
            if(sum==4)
            {
              carCount++;
              sum=0;  
            }

        }
        else
            carCount++;//1//2//3   
    }
    */

    return 0;
}