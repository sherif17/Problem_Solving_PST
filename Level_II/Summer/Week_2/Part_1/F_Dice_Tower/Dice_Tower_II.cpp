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
  int n,k,a,b;
  cin>>n>>k;
  bool p=1;
  for (int i = 0; i < n; ++i) {
    cin>>a>>b;
    if(k==a||k==b||k==7-a||k==7-b)
      p=0;
  }
  if(p)cout<<"YES";
  else  cout<<"NO";

  return 0;
}