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

void solve(){
  int n,k,u,v;
  cin>>n>>k;

  vector<int>vec[n+1],freq(n+1,0);

  for (int i = 1; i <n ; ++i) {
    cin>>u>>v;
    vec[u].push_back(v);
    vec[v].push_back(u);
    freq[u]++;
    freq[v]++;
  }
  queue<int> q[2];
  for(int i=1; i<=n; i++){
    if(freq[i] <= 1){
      q[0].push(i);
    }
  }

  int idx = 0;
  while(k-- && n > 0){
    while(!q[idx].empty()){
      u = q[idx].front();
      q[idx].pop();
      freq[u]--;
      n--;
      for(int v : vec[u]){
        freq[v]--;
        if(freq[v] == 1)
          q[!idx].push(v);
      }
    }
    idx = !idx;
  }
  cout << n << endl;
}
int main() {
  fast
  fastIO();
  int t;
  cin>>t;
  while (t--){
    solve();
  }
    return 0;
}