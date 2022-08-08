# include <bits/stdc++.h>
using namespace std;
#define fast  ios::sync_with_stdio(0), cin.tie(0) , cout.tie(0);
void fastIO()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  freopen("error.txt", "w", stderr);
#endif
}

int main() {
  fast
  fastIO();
  int n,m;
  cin>>n>>m;
  vector<int>vec(n);
  for(auto &it: vec)
    cin>>it;

  sort(vec.begin(),vec.end());
  int res=0;
  for (int i = 0; i <m ; ++i) {
    if(vec[i]<0)
      res+=vec[i]*-1;
  }
  cout<<res;

  return 0;
}