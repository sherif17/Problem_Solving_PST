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
bool check(vector<int> &v, int n){
  stack <int> st;
  int idx = 0;
  for(int i=1; i<=n; i++){
    st.push(i);

    while(!st.empty() && st.top() == v[idx]){
      st.pop();
      idx++;
    }
  }
  return st.empty();
}
int main() {
  fast
  fastIO();
  int n;
  while(cin >> n, n){
    vector<int> v(n);
    while(cin >> v[0], v[0]){
      for(int i=1; i<n; i++)
        cin >> v[i];
      cout << (check(v, n)?"Yes":"No") << "\n";
    }
    cout << "\n";
  }

    return 0;
}