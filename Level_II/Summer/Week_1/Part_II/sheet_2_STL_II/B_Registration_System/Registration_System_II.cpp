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
  string s;
  cin >> q;

  unordered_map<string, int> mp;
  while (q--) {
    cin >> s;
    auto it = mp.find(s);
    if (it != mp.end()) {
      cout << it->first << it->second;
    } else {
      cout << "OK";
    }
    mp[s]++;
    cout << '\n';
  }

  return 0;
}