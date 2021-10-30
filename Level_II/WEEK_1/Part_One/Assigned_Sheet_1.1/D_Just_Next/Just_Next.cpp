#include <bits/stdc++.h>
using namespace std;

void fastIO() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  freopen("error.txt", "w", stderr);
#endif
}
// const N= 1e7;
int main() {
  fastIO();
  int t, n, i;
  cin >> t;
  while (t--) {
    cin >> n;
    vector<int> v(n);
    for (auto &i : v) {
      cin >> i;
    }
    for (i = n - 2; i >= 0; i--) {
      if (v[i] < v[i + 1])
        break;
    }

    if (i == -1) {
      cout << -1 << endl;
    } else {
      int idx = i + 1;
      for (int j = i + 1; j < n; j++) {
        if (v[j] > v[i] && v[j] < v[idx])
          idx = j;
      }
      swap(v[i], v[idx]);
      sort(v.begin() + i + 1, v.end());
      for (int x : v)
        cout << x;
      cout << "\n";
    }

}
return 0;
}