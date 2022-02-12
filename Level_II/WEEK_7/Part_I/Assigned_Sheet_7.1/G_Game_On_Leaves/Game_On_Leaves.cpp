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
  int n,x,u,v;
  cin>>n>>x;
  int freq[n+1]={};
  for (int i = 1; i <n; ++i) {
    cin>>u>>v;
    freq[u]++;
    freq[v]++;
  }
  cout << (freq[x] <= 1 || n % 2 == 0?"Ayush":"Ashish") << endl;
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