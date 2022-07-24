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
  double sum=0;
  cin>>n;
  while (n>0)
  {
    sum+=1.0/n;
    n--;
  }
  cout<<fixed<<setprecision(12)<<sum;
    return 0;
}