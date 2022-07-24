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
  int n, turn=0;
  cin>>n;
  vector<int>v(n),ans;
  for(int &x:v)
    cin>>x;
  sort(v.begin,v.end);

  int l=(n-1)/2-1,r=n-1;
  for (int i = 0; i < n; ++i) {
    int val;
    if(turn == 0){
      val = v[r];
      r--;
    }else{
      val = v[l];
      l--;
    }
    ans.push_back(val);
    turn = !turn;
    if(turn == 1 && n % 2 == 0 && i == n-2)
      turn = 0;
  }
  int cnt = 0;
  for(int i=1; i<n-1; i++)
    if(ans[i] < ans[i-1] && ans[i] < ans[i+1])
      cnt++;
  cout << cnt << endl;
  for(int x : ans)
    cout << x << " ";

  return 0;
}