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
  int n,k,x;
  cin>>n>>k;
  deque<int>dq(n);
  for(auto &it: dq)
  {
    cin>>it;
  }
  for(int i=0;i<k;i++)
  {
    x=dq.front();
    dq.pop_front();
    dq.push_back(x);
  }

  for(auto it: dq)
  {
    cout<<it<<" ";
  }

  return 0;
}