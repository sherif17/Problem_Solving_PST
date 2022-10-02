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
  int n,m,k,x,l,r,v;
  cin>>n>>m>>k;
  vector<int>vec(n+1),par(100005,0);
  vector<pair<int,pair<int,int>>>pr(m+1);

  vec.push_back(0);
  for (int i = 0; i <n ; ++i) {
    cin>>x;
    vec.push_back(x);
  }
  for (int i = 0; i < m; ++i) {
    cin>>l>>r>>v;
    pr.emplace_back(v, make_pair(l,r));
  }
  int start,end;
  while (k--){
    cin>>start>>end;
    par[l]++;
    par[r+1]++;
    for (int i = start; i <=end ; ++i) {

    }
  }

  return 0;
}