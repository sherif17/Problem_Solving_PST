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

  int n;
  cin >> n;

  vector<int> vec(n);

  bool pos = 0;

  for (int i = 0; i < n; i++) {
    cin >> vec[i];
    if (vec[i] > 0)
      pos = 1;
  }
  sort(vec.begin(), vec.end());
  vector<int> set1, set2, set3;
  int index = 1;
  set1.push_back(vec[0]);

  if (!pos) {
    index = 3;
    set2.push_back(vec[1]);
    set2.push_back(vec[2]);
  }

  for (int i = index; i < n; ++i) {
    if (vec[i] <= 0)
      set3.push_back(vec[i]);
    else
      set2.push_back(vec[i]);
  }
  cout << set1.size() << " ";
  for (auto it : set1) {
    cout << it << " ";
  }
  cout << "\n";
  cout << set2.size() << " ";
  for (auto it : set2) {
    cout << it << " ";
  }
  cout << "\n";
  cout << set3.size() << " ";
  for (auto it : set3) {
    cout << it << " ";
  }

  return 0;
}
