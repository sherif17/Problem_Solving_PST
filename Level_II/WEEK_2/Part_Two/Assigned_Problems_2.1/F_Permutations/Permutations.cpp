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
  int n, k, min_dif = INT_MAX;
  cin >> n >> k;
  vector<string> vec(n);
  for (auto &it : vec) {
    cin >> it;
  }
  vector<int> p(k);
  for (int i = 0; i < k; i++)
    p[i] = i;

  do {
    int mn = INT_MAX;
    int mx = 0;
    for (int i = 0; i < n; i++) {
      int x = 0;
      for (int j = 0; j < k; j++) {
        x *= 10;
        x += vec[i][p[j]] - '0';
      }
      mn = min(mn, x);
      mx = max(mx, x);
    }
    min_dif = min(min_dif, mx - mn);
  } while (next_permutation(p.begin(), p.end()));
  cout << min_dif;
  return 0;
}