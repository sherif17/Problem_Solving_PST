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
  int t, x, y, n;
  cin >> t;
  while(t--){
    cin >> x >> y >> n;
    int val = n / x * x + y;
    if(val > n)
      val -= x;
    cout << val << endl;
  }

    return 0;
}