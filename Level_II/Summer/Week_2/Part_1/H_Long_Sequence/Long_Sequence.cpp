#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
# define INF 0x3f3f3f3f
int main() {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int t = 1;
  //cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> x(n);
    ll sum = 0, ans = 0, k;
    for (int i = 0; i < n; i++) {
      cin >> x[i];
      sum += x[i];
    }
    cin >> k;
    ans += (k / sum) * n;
    k %= sum;
    for (int i = 0; i < n; i++) {
      if (k < 0)break;
      k -= x[i];
      ans++;
    }
    cout << ans;
  }
}