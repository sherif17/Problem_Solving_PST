# include <bits/stdc++.h>
using namespace std;
#define fast  ios::sync_with_stdio(0), cin.tie(0) , cout.tie(0);
void fastIO()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  freopen("error.txt", "w", stderr);
#endif
}

long long lcm(long long a, long long b)
{
  return a*b/__gcd(a, b);
}
int main() {
  fast
  fastIO();
  int t,n, x;
  cin>>t;
  while (t--)
  {
    cin>>n;
    long long l = 1;
    bool flag = true;
    for(int i=1; i<=n; i++){
      l = lcm(l, i+1);
      cin >> x;
      if(x % l == 0)
        flag  = false;
    }
    cout << (flag?"YES":"NO") << endl;
  }

    return 0;
}