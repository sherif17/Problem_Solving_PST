#include <bits/stdc++.h>
using namespace std;

void fastIO() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  freopen("error.txt", "w", stderr);
#endif
}

int main() {
  fastIO();
  int n, m;
  cin >> n >> m;
  vector<bool> vec(m + 1);
  while (n--) {
    int l, r;
    cin >> l >> r;
    for (int i = l; i <= r; i++)
      vec[i] = 1;
  }
  vector<int> res;
  for (int i = 1; i <= m; i++) {
    if (vec[i] == 0)
      res.push_back(i);
  }
  cout << res.size() << endl;
  for (auto it : res)
    cout << it << " ";

  return 0;
}