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
  int n, m;
  cin >> n >> m;
  vector<int> vec(m);
  for (auto &it : vec) {
    cin >> it;
  }
  sort(vec.begin(), vec.end());
  int minm=INT_MAX;
  for (int i = 0; i<=(m-n); ++i) {
    minm=min(minm,vec[i+n-1]-vec[i]);
  }
  cout << minm;
  return 0;
}