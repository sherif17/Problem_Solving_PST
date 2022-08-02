#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
void fastIO() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  freopen("error.txt", "w", stderr);
#endif
}

int main() {
  fast fastIO();
  int t=1;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> x(n);
    for (auto &i : x) {
      cin >> i;
    }
    sort(x.begin(), x.end());
    int ans = INT_MAX;
    for (int i = 1; i < n; ++i) {
      ans = min(ans, x[i] - x[i - 1]);
    }
    cout << ans << "\n";
  }

  return 0;
}