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
  int n,x;
  long long s;
  cin>>n>> s;
  vector<int>vec(n);
  for (int &x :vec) {
    cin>>x;
  }
  int L = 0, R = -1;
  for(int i=0, j=0; j < n;){
    if(s + vec[j] >= 0){
      s += vec[j];
      if(j - i > R - L)
      {
        R = j + 1;
        L = i + 1;
      }
      j++;
    }else if(i == j){
      i++;
      j++;
    }else{
      s -= vec[i];
      i++;
    }
  }
  if(R != -1)
    cout << L << " " << R << endl;
  else
    cout << -1 << endl;

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