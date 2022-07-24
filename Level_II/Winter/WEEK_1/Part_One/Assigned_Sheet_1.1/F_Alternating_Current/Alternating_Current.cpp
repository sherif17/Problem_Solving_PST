#include <bits/stdc++.h>
using namespace std;

void fastIO() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  freopen("error.txt", "w", stderr);
#endif
}

int main() {
  fastIO();
  string s;
  cin >> s;
  stack<char> stk;
  for (int i = 0; i < s.size(); i++) {
    if(stk.empty())
      stk.push(s[i]);
    else if (stk.top() == s[i] && !stk.empty())
      stk.pop();
    else
      stk.push(s[i]);

  }
  cout << (stk.empty() ? "yes" : "No")<<endl;

  return 0;
}