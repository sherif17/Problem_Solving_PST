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
  string s;
  cin >> s;
  deque<char> qu;
  bool flag = false;
  bool begin = false;

  for (int i = 0; i < s.size(); ++i) {

//    if (s[i] == '0' && !begin) {
//      //continue;
//    } else
        if (s[i] == '1') {
      begin = true;
    } else if (begin && s[i] == '0' && !flag) {
      flag = true;
      continue;
    }
    qu.push_back(s[i]);
  }
  if(qu.size()==s.size())
    qu.pop_back();

  while (!qu.empty()) {
    cout << qu.front();
    qu.pop_front();
  }
  return 0;
}