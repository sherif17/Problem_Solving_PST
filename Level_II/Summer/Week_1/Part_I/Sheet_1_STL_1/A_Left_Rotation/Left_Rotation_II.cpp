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
  int n,d;

  cin>>n>>d;

  vector<int>vec(n);
  vector<int>res;

 for(auto &i : vec)cin>>i;

  for(int i=d;i<n;i++)
  {
    cout<<vec[i]<<" ";
  }
  for(int i=0;i<d;i++)
  {
    cout<<vec[i]<<" ";
  }


  return 0;
}