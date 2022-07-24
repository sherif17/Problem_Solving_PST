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
  int t;
  cin >> t;
  while (t--) {
    int n, m, k;
    cin >> n >> m >> k;
    if ((n - 1ll) * n >> 1 < m || m < n - 1) {
      puts("NO");
      return 0;
    }
    if (n == 1) {
      if (k > 1) {
        puts("YES");
      } else {
        puts("NO");
      }
    } else if (m < (n - 1ll) * n >> 1) {
      if (k > 3) {
        puts("YES");
      } else {
        puts("NO");
      }
    } else if (k > 2) {
      puts("YES");
    } else {
      puts("NO");
    }
  }

  return 0;
}