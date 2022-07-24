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
  int n, m, x, k, v;

  while (cin >> n >> m) {
    map<int, vector<int>> vec;
    for (int i = 1; i <= n; i++) {
      cin >> x;
      vec[x].push_back(i);
    }
    while (m--) {
      cin >> k >> v;
      cout << (!vec.count(v) || vec[v].size() < k ? 0 : vec[v][k - 1]) << endl;
    }
  }
  return 0;
}