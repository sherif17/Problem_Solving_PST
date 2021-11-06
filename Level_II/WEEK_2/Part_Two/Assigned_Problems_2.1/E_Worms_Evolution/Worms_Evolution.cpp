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
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; ++i) {
    cin >> arr[i];
  }
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      if (i == j)
        continue;
      for (int k = 0; k < n; ++k) {
        if (k == i || k == j)
          continue;

        if (arr[i] == arr[j] + arr[k])
        {
          cout << i + 1 << " " << j + 1 << " " << k + 1 << endl;
          return 0;

        }
      }
    }
  }
  cout << -1;
  return 0;
}