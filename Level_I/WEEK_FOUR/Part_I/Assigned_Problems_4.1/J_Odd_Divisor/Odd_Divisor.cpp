#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        while (n % 2 == 0)
        {
            n /= 2;
        }
        if (n > 1)
            cout << "YES";
        else
            cout << "NO";

        cout << endl;

        /* long long i = 3;
        bool flag = 0;
        while (i <= n)
        {
            if (n % i == 0)
            {
                flag = 1;
                break;
            }

            i += 2;
        }
        cout << (flag == 0 ? "NO" : "YES") << endl;*/
    }

    return 0;
}