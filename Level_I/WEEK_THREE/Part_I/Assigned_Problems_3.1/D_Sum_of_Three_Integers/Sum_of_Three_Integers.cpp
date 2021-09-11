#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, s;
    cin >> k >> s;

    if (s % k == 0 && s!=k)
        cout << 1 << endl;
    else{
        cout<<pow(s,3)-2;

    }    

    return 0;
}