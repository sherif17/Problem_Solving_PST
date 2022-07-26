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
  int n, x;
  cin >> n;
  vector<int> vec;
  vector<int> res;


  for (int i = 0; i < n; ++i) {
    cin>>x;
    vec.push_back(x);
  }

  int sz=0;
  for (int i = 0; i <n; ++i) {
     if(vec[i]==1){
       if(sz!=0)
         res.push_back(sz);
       sz=0;
     }
     sz++;
  }
  res.push_back(sz);
  cout<<res.size()<<"\n";
  for (auto it : res) {
    cout<<it<<" ";
  }

  return 0;
}