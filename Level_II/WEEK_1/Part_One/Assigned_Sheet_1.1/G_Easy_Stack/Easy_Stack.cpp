  #include <bits/stdc++.h>
  using namespace std;
  #define fast  ios::sync_with_stdio(0), cin.tie(0) , cout.tie(0);
  void fastIO() {
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
  #endif
  }

  int main() {
    fast
    fastIO();
    int t,n,x;
    cin >> t;
    stack<int> stk;
    while (t--) {
      cin >> n;
      if (n == 1) {
        cin >> x;
        stk.push(x);
      } else if (n == 2) {
        if (!stk.empty())
          stk.pop();
      } else {
        if (!stk.empty())
          cout << stk.top();
        else
          cout << "Empty!";
        cout<<'\n';
      }
    }
    return 0;
  }