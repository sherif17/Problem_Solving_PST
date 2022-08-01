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
  deque<int> dq;
  priority_queue<int, vector<int>, greater<int>> pq;
  int t, n, x;
  cin >> t;
  while (t--) {
    cin >> n;
    if (n == 1) {
      cin >> x;
      dq.push_back(x);
    } else if (n == 2) {
      if (!pq.empty()) {
        cout << pq.top() << "\n";
        pq.pop();
      } else {
        cout << dq.front() << "\n";
        dq.pop_front();
      }

    } else {
      while (!dq.empty())
      {
        pq.push(dq.front());
        dq.pop_front();
      }
    }
  }

  return 0;
}