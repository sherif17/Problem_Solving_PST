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
  int n, sum = 0, v;
  cin >> n;
  vector<long long> pre(n + 1);
  pre[0] = 0;
  for (int i = 1; i <= n; ++i) {
    cin >> v;
    sum += v;
    pre[i] = sum;
  }
  int q;
  cin >> q;
  while (q--) {
    int l, r;
    cin >> l >> r;
    cout << pre[r + 1] - pre[l] << "\n";
  }

  return 0;
}