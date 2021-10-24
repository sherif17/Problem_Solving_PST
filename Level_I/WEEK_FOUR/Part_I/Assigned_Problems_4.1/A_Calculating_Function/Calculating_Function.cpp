#include <bits/stdc++.h>
using namespace std;

long long sumOfEven(long long n)
{
    return n * (n + 1);
}

long long sumOfOdd(long long n){
    return n*n;
}

int main()
{
    long long n;
    cin >> n;
    long long even = n/2, odd =n-even;

    cout << sumOfEven(even)-sumOfOdd(odd);

    return 0;
}