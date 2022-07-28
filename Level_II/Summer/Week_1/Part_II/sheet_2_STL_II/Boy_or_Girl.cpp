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
  unordered_set<char> st;
  string s;
  cin >> s;

  for (int i = 0; i < s.size(); ++i) {
    st.insert(s[i]);
  }
//  for (auto it : st) {
//    cout<<it<<" ";
//  }

  if (st.size() % 2 == 0) {
    cout << "CHAT WITH HER!";
  } else {
    cout <<"IGNORE HIM!";
  }

  return 0;
}