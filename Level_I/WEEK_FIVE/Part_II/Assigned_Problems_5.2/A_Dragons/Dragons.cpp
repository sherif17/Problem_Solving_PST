#include <bits/stdc++.h>
using namespace std;

int a[1009], b[1009];
int main()
{
    int s, n;
    cin >> s >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                swap(a[i], a[j]);
                swap(b[i], b[j]);
            }
        }
    }
    bool pass = true;
    for (int i = 0; i < n; i++)
    {
        if (s > a[i])
        {
            s += b[i];
        }
        else
        {
            pass = false;
            break;
        }
    }
    cout << (pass == true ? "YES" : "NO") << endl;
  //  if(pass == true)

    return 0;
}