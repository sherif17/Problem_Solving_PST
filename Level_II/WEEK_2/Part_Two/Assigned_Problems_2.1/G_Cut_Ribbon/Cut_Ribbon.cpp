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

  int n, a, b, c, cnt = 0;
  cin >> n >> a >> b >> c;

  for (int i = 0; i <= n; ++i) {
    for (int j = 0; j <= n; ++j) {
      int k = (n - (i * a + j * b)) / c;
      if (k < 0)
        break;
      if (i * a + j * b + k * c == n)
        cnt = max(cnt, i + j + k);
    }
  }
  cout << cnt;
  return 0;
}