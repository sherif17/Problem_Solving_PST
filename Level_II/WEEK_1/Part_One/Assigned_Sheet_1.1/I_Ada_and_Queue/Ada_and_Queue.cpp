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
  bool flag = true;
  cin >> q;
  deque<int> dq;
  while (q--) {
    string s;
    cin >> s;
    if (flag) {
      if (s == "toFront") {
        int n;
        cin >> n;
        dq.push_front(n);

      } else if (s == "front") {

        if (!dq.empty()) {
          cout << dq.front() << endl;
          dq.pop_front();
        } else
          cout << "No job for Ada?" << endl;

      } else if (s == "back") {
        if (!dq.empty()) {
          cout << dq.back() << endl;
          dq.pop_back();
        } else
          cout << "No job for Ada?" << endl;

      } else if (s == "reverse") {
        flag = !flag;
      } else if (s == "push_back") {
        int n;
        cin >> n;
        dq.push_back(n);
      }

    } else {
      if (s == "toFront") {
        int n;
        cin >> n;
        dq.push_back(n);

      } else if (s == "front") {
        if (!dq.empty()) {
          cout << dq.back() << endl;
          dq.pop_back();
        } else
          cout << "No job for Ada?" << endl;

      } else if (s == "back") {
        if (!dq.empty()) {
          cout << dq.front() << endl;
          dq.pop_front();
        } else
          cout << "No job for Ada?" << endl;

      } else if (s == "reverse") {
        flag = !flag;
      } else if (s == "push_back") {
        int n;
        cin >> n;
        dq.push_front(n);
      }
    }
  }

  return 0;
}