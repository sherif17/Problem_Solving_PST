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
  int t;
  cin>>t;
  while (t--){
    int n,ans=0;
    cin>>n;
    vector<int>vec(n);
    for (auto &i :vec) {
      cin>>i;
    }
    for (int i = 0; i <n-1 ; ++i) {
      int mn=min(vec[i],vec[i+1]);
      int mx= max(vec[i],vec[i+1]);
      while (mn*2<mx){
        mn*=2;
        ans++;
      }
    }
    cout<<ans<<"\n";
  }

    return 0;
}