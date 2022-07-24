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

int fastPow(int b, int p, int m){
  if(p == 0)
    return 1;
  if(p & 1)
    return 1ll * b * fastPow(b, p-1, m) % m;
  int v = fastPow(b, p/2, m);
  return 1ll * v * v % m;
}

int main() {
  fast
  fastIO();
  int b , p, m;
  while(cin >> b >> p >> m)
    cout << fastPow(b, p, m) << endl;


    return 0;
}