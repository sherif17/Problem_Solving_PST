#include <bits/stdc++.h>
using namespace std;

long long flor(long long  a, long long b)
{
    return a / b;
}

int main()
{
    long long a;
    long long b, n;
    cin >> a >> b >> n;
    long long greatest_sum = 0;
    greatest_sum = flor(a * n, b) - (a * flor(n, b));
    if (greatest_sum > n)
    {
        while (greatest_sum > n)
        {
            n--;
            greatest_sum = flor(a * n, b) - (a * flor(n, b));
        }
        cout << greatest_sum << endl;
    }
    else
        cout << greatest_sum << endl;

    return 0;
}