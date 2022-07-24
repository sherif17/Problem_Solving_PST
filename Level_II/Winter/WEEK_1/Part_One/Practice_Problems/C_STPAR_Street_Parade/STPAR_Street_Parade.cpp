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
  int n;
  cin >> n;
  //vector<int> vec(n);
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  stack<int> s;
  int cur = 1;
  vector<int> v, srtd(n);
  for (int i = 0; i < n; i++) {
    srtd[i] = i + 1;
    if (cur == arr[i]) {
      v.push_back(cur);
      cur++;
    } else {
      if (s.empty() == false && s.top() == cur) {
        s.pop();
        v.push_back(cur);
        cur++;
        i--;
      } else
        s.push(arr[i]);
    }
  }
  while (s.size()) {
    v.push_back(s.top());
    s.pop();
  }

  if (srtd != v)
    cout << "NO";
  else
    cout << "YES";

  return 0;
}