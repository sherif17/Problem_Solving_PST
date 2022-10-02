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
  int q;
  cin>>q;
  while (q--){
    int n,v;
    cin>>n;
    vector<vector<int>>vec(n+1);
    for (int i = 1; i <=n; ++i) {
      cin>>v;
      vec[v].push_back(i);
    }
    int mn=INT_MAX;
    for (int i = 1; i <=n ; ++i) {
      for (int j = 1; j <vec[i].size() ; ++j) {
        mn=min(mn,vec[i][j]-vec[i][j-1]);
      }
    }
    if(mn==INT_MAX)cout<<-1<<endl;
    else
      cout<<mn+1<<endl;
  }

    return 0;
}