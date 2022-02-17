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
const int N = 2e5 + 25;
int main() {
  fast
  fastIO();

  int n, k, q, l, r, a[N] = {};
  cin >> n >> k >> q;

  for(int i=0; i<n; i++){
    cin >> l >> r;
    a[l]++;
    a[r + 1]--;
  }
  for(int i=1; i<N; i++)
    a[i] += a[i - 1];

  for(int i=1; i<N; i++){
    a[i] = a[i] >= k;
    a[i] += a[i - 1];
  }
  while(q--){
    cin >> l >> r;
    cout << a[r] - a[l - 1] << endl;
  }

    return 0;
}