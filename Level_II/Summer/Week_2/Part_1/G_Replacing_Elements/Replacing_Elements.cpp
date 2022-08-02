#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
# define INF 0x3f3f3f3f
int main() {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int t = 1;
  cin >> t;
  while (t--) {
    int n,k;cin>>n>>k;
    vector<int>x(n);
    bool p=1;
    for(auto&i:x) {
      cin >> i;
      if (i > k)p = 0;
    }
    if(p){cout<<"YES"<<'\n';continue;}
    sort(x.begin(), x.end());
    if(x[0]+x[1]<=k){
      cout<<"YES"<<'\n';
    }
    else cout<<"NO"<<'\n';
  }
}
