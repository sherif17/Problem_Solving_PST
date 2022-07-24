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
  int t, g, l;
  cin >> t;
  while(t--){
    cin >> g >> l;
    if(l % g)
      cout << -1 << endl;
    else
      cout << g << " " << l << endl;
  }
    return 0;
}