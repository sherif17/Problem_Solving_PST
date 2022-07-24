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
int solve(){
  int n ,x;
  set<int> st;
  cin>>n;
  for (int i = 0; i < n; ++i) {
    cin>>x;
    st.insert(x);
  }
  for (int k = 1; k <1024 ; ++k) {
    set<int>sec;
    for (auto it : st)
      sec.insert(k^it);
    if(st== sec)
      return k;
    }
    return -1;
  }

int main() {
  fast
  fastIO();
  int q;
  cin>>q;
  while (q--)
  {
    cout<<solve()<<endl;
  }

    return 0;
}