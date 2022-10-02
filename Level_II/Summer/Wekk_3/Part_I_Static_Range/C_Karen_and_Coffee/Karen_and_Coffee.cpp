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
  int n, k, q, l, r;
  cin >> n >> k >> q;

  vector<int> partial(200005, 0), pre(200005, 0);

  for (int i = 0; i < n; i++) {
    cin >> l >> r;
    partial[l]++;
    partial[r + 1]--;
  }

  int sum = 0, sum_pre = 0;
  for (int i = 1; i < 200005; i++) {
    sum += partial[i];
    if (sum >= k) {
      sum_pre++;
    }
    pre[i] = sum_pre;
  }
  while (q--) {
    cin >> l >> r;
    cout << pre[r] - pre[l - 1] << '\n';
  }

  return 0;
}