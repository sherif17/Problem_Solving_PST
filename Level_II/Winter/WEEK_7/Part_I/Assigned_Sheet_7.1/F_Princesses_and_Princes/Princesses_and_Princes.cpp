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
  int n, k, x;
  cin >> n;
  vector<int> g[n+1];
  for(int i=1; i<=n; i++){
    cin >> k;
    while(k--){
      cin >> x;
      g[i].push_back(x);
    }
  }
  set<int> pr;
  for(int i=1;i <=n;i++)
    pr.insert(i);
  int pri = -1;
  for(int i=1; i<=n; i++){
    bool flag = false;
    for(int p : g[i]){
      if(pr.find(p) != pr.end()){
        pr.erase(pr.find(p));
        flag = true;
        break;
      }
    }
    if(!flag)
      pri = i;
  }

  if(pr.empty())
    cout << "OPTIMAL\n";
  else
    cout << "IMPROVE\n" << pri << " " << *pr.begin() << endl;
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