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
  int t, n, m, x;
  cin >> t;
  set<int> st1, st2;
  while (t--) {
    st1.clear();
    st2.clear();
    int cnt = 0;
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
      cin >> x;
      st1.insert(x);
    }
    for (int i = 0; i < m; ++i) {
      cin >> x;
      st2.insert(x);
    }
    for (auto it = st1.size() < st2.size() ? st1.begin() : st2.begin();
         it != (st1.size() < st2.size() ? st1.end() : st2.end()); ++it) {
      auto pos = st1.size() < st2.size() ? st2.find(*it) : st1.find(*it);
      if (pos != (st1.size() < st2.size() ? st2.end() : st1.end())) {
        cnt++;
      }
    }
    cout << cnt << "\n";
  }

  return 0;
}