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
  int t, n, x;
  cin >> t;
  while(t--) {
    cin >> n;
    vector<int> v(2 * n + 5, -1);
    for (int i = 1; i <= n; i++) {
      cin >> x;
      v[x] = i;
    }
    int cnt = 0;
    for (int num = 1; num <= 2 * n; num++) {
      for (int i = 1; i * i < num; i++) {
        if (num % i != 0)
          continue;
        int j = num / i;
        if (v[i] == -1 || v[j] == -1)
          continue;
        if (v[i] + v[j] == num)
          cnt++;
      }
    }
    cout << cnt << endl;
  }
    return 0;
}