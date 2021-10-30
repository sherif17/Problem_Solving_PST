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
  int n,m,f;
  cin>>n>>m;
  queue<int>qu;
  int arr[105];

  for(int i=1;i<=n;i++) {
    cin >>arr[i];
    qu.push(i);
  }
  while (!qu.empty())
  {
    f=qu.front();
    qu.pop();
    arr[f]-=m;
    if(arr[f]>0)
      qu.push(f);
  }
  cout<<f;

  return 0;
}