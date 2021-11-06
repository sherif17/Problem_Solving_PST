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
  int q;
  cin >> q;
  while (q--) {
    int n, res = INT_MAX;
    cin >> n;
    vector<int> vec(n);
    for (auto &it : vec)
      cin >> it;
    for (int k = 0; k <=30000; ++k) {
      int total_dis = 0;
      for (int x : vec)
        total_dis += abs(x - k);
      res = min(res, total_dis);
    }
    cout<<res<<endl;
  }

  return 0;
}