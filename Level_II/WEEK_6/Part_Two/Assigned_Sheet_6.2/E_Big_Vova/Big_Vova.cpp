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
  int t, n, a[1000];
  cin >> t;
  while(t--) {
    cin >> n;
    int mx = 0, idx;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      if (a[i] > mx) {
        mx = a[i];
        idx = i;
      }
    }
    cout << mx << " ";
    a[idx] = -1;
    int g = mx;
    for (int i = 1; i < n; i++) {
      int temp = 1;
      for (int i = 0; i < n; i++) {
        if (a[i] == -1)
          continue;
        if (__gcd(g, a[i]) >= __gcd(g, temp)) {
          temp = a[i];
          idx = i;
        }
      }
      cout << temp << " ";
      a[idx] = -1;
      g = __gcd(g, temp);
    }
    cout << endl;
  }
    return 0;
}