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
  int n;
  cin>>n;
  int sum=0;
  int x;
  for (int i = 0; i < n; ++i) {
    cin>>x;
    if(x<0)
      sum+=x*-1;
    else
      sum+=x;
  }
  cout<<sum;

  return 0;
}