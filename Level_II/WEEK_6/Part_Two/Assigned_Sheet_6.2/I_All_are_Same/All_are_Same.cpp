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

int main() {
  fast
  fastIO();
  int t, n, a[50];
  cin >> t;
  while(t--){
    cin >> n;
    int mn = INT_MAX, mx = INT_MIN;
    for(int i=0; i<n; i++){
      cin >> a[i];
      mn = min(mn, a[i]);
      mx = max(mx, a[i]);
    }
    if(mn == mx){
      cout << -1 << endl;
      continue;
    }
    int g = 0;
    for(int i=0; i<n; i++)
      g = __gcd(g, a[i] - mn);
    cout << g << endl;
    }

    return 0;
}