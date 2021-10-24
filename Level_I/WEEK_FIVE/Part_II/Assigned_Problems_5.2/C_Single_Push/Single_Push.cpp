#include <bits/stdc++.h>
using namespace std;
int arrA[1000009], arrB[1000009];
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> arrA[i];
        for (int i = 0; i < n; i++)
            cin >> arrB[i];
        int l, r, cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (arrA[i] != arrB[i])
            {
                r = i;
                if (l == -1)
                    l = i;
            }
        }
        if (l == -1)
        {
            cout << "YES" << endl;
            continue;
        }

        vector<int> diff;
        for (int i = l; i <= r; i++)
        {
            diff.push_back({arrB[i] - arrA[i]});
        }
        
        bool f = (diff[0] > 0);
        for (int i = 1; i < diff.size(); i++)
        {
            if (diff[i] != diff[i - 1])
                f = false;
        }
        if (f == true)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}