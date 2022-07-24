#include <bits/stdc++.h>
using namespace std;

void fastIO() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  freopen("error.txt", "w", stderr);
#endif
}
void draw(int n, int x) {
  deque<char> dq;
  while (x--) {
    dq.push_back('(');
    dq.push_back(')');
  }
  while ((int)dq.size() < n)
    dq.push_back(')'), dq.push_front('(');
  for (auto i : dq)
    cout << i;
  cout << endl;
}
int main() {
  fastIO();
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
      draw(2 * n, i + 1);
    }
  }

  return 0;
}