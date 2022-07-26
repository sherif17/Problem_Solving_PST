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
  int n, m, f;
  queue<int>qu;
  int arr[100];
  cin>>n>>m;
  for (int i = 1; i <=n; ++i) {
    cin >> arr[i];
    qu.push(i);
  }
  while (!qu.empty()) {
    f = qu.front();
    qu.pop();
    arr[f]-=m;
    if(arr[f]>0)
      qu.push(f);
  }
  cout<<f;

  return 0;
}