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
void sol() {
  int a, b, c;
  cin >> a >> b >> c;
  for (int x = -100; x <=100; ++x) {
    for (int y = -100; y <= 100; ++y) {
      int z = a - (x + y);
      if (z == x || z == y || x == y)
        continue;
      if (x * y * z == b && (x * x) + (y * y) + (z * z) == c) {
        cout << x << " " << y << " " << z << " "<<endl;
        return;
      }
    }
  }
  cout << "No solution.\n";
}
int main() {
  fast fastIO();
  int q;
  cin >> q;
  while (q--) {
    sol();
  }

  return 0;
}