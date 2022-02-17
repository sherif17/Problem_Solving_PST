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
  long long cnt=0;
  vector<int> v(n);
  for (int &x : v) {
    cin>>x;
  }
  for(int i=0; i<n; i++){
    int c = upper_bound(v.begin(), v.end(), v[i] + d) - v.begin() - i - 1;
    cnt += 1ll * c * (c - 1) / 2;
  }
  cout << cnt;

    return 0;
}