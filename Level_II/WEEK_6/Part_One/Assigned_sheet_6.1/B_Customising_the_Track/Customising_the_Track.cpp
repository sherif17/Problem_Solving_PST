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
  fast fastIO();
  int t, n, x;
  long long s;
  cin >> t;
  while (t--) {
    s = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
      cin >> x;
      s += x;
    }
    int m = s % n;
    int c = n - m;
    cout << 1ll * m * c << endl;
  }
  return 0;
}