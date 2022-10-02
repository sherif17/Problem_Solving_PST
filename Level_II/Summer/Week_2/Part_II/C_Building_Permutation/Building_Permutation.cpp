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
  long long n;
  cin >> n;
  vector<long long> vec(n);
  for (auto &i : vec)
    cin >> i;

  sort(vec.begin(), vec.end());

  long long minMoves = 0;

  for (int i = 0; i < n; ++i) {
    minMoves += abs(i+1 - vec[i]);
  }
  cout << minMoves;
  return 0;
}