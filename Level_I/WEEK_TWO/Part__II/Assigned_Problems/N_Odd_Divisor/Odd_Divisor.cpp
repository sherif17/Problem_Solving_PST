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
            if (n > 1 && (n % 2))

                cout << "YES" << endl;
            else
                cout << "NO"<< endl;;
        }
        return 0;
    }