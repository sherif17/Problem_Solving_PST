#include <bits/stdc++.h>
using namespace std;

void fastIO() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  freopen("error.txt", "w", stderr);
#endif
}

bool matched(char leftBrak, char rightBrak) {
  return (leftBrak == '(' && rightBrak == ')') ||
         (leftBrak == '[' && rightBrak == ']');
}
int main() {
  fastIO();
  int n;
  string str;
  cin >> n;
  getline(cin, str);
  while (n--) {
    getline(cin, str);
    stack<char> stk;
    bool flag=true;
    for (int i = 0; i < str.size(); ++i) {
      if (str[i] == '(' || str[i] == '[') {
        stk.push(str[i]);
      } else if (!stk.empty() && matched(stk.top(), str[i])) {
        stk.pop();
      } else {
        flag=false;
        break;
      }
    }
    if (flag && stk.empty())
      cout << "Yes\n";
    else
      cout << "No\n";
  }
  return 0;
}