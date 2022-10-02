#include<bits/stdc++.h>
using namespace std;
vector<int> v ,pre_mn, pre_mx,suf_mn, suf_mx;
int main() {
  int t = 1;
  cin >> t;
  while (t--) {
    //ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int n, m;
    string s;
    cin >> n >> m >> s;
    s = "5" + s;
    v=vector<int>(n+2);
    pre_mn=vector<int>(n+2,INT_MAX);
    pre_mx=vector<int>(n+2,INT_MIN);
    suf_mn=vector<int>(n+2,INT_MAX);
    suf_mx=vector<int>(n+2,INT_MIN);
    for (int i = 1; i <= n; ++i) {
      v[i] = v[i - 1] + (s[i] == '+' ? 1 : -1);
      pre_mn[i] = min(pre_mn[i - 1], v[i]);
      pre_mx[i] = max(pre_mx[i - 1], v[i]);
    }
    for (int i = n; i; i--) {
      suf_mn[i] = min(suf_mn[i + 1], v[i]);
      suf_mx[i] = max(suf_mx[i + 1], v[i]);
    }
    pre_mn[0] = pre_mn[n + 1] = 0;
    pre_mx[0] = pre_mx[n + 1] = 0;
    suf_mn[0] = suf_mn[n + 1] = 0;
    suf_mx[0] = suf_mx[n + 1] = 0;
    while (m--) {
      int l, r;
      cin >> l >> r;
      int toSub = v[r] - v[l - 1];
      int mn = pre_mn[l - 1];


      if (r + 1 <= n) mn = min(mn, suf_mn[r + 1] - toSub);


      int mx = pre_mx[l - 1];
      if (r + 1 <= n) mx = max(mx, suf_mx[r + 1] - toSub);

      cout << mx - mn + 1 + (mx < 0 || mn > 0) << '\n';

    }
  }
}