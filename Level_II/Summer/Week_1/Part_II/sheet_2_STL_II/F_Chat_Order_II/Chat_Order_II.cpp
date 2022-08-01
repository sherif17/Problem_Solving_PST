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
  map<string, bool>mp;
  vector<string>vec;
  int n;
  cin >> n;
  string s;
  for (int i = 0; i <n; ++i) {
    cin >> s;
    vec.push_back(s);
  }

  for (auto it = vec.rbegin(); it <vec.rend() ; ++it) {
    if(mp[*it])
      continue;
    mp[*it]=true;
    cout<<*it<<"\n";
  }
  return 0;
}