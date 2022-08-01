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
  string keys = "qwertyuiopasdfghjkl;zxcvbnm,./";
  unordered_map<char, int> mp;
  for (int i = 0; i < keys.size(); ++i) {
    mp.insert({keys[i], i});
  }
  char dir;
  string result;
  cin >> dir;
  string s;
  cin >> s;

  if (dir == 'R') {
    for (int i = 0; i < s.size(); ++i) {
      auto pos = (mp.find(s[i])->second);
      for (auto it : mp) {
        if (it.second == pos - 1) {
          result += it.first;
          break;
        }
      }
    }
  } else {
    for (int i = 0; i < s.size(); ++i) {
      auto pos = (mp.find(s[i])->second);
      for (auto it : mp) {
        if (it.second == pos + 1) {
          result += it.first;
          break;
        }
      }
    }
  }
  cout << result;

  return 0;
}