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
  int a,b,n,l,h;
  cin>>a>>b;
  vector<int>vec;
  for (int i = 1; i*i <=n; ++i) {
    if(a % i)
      continue;
    if(b % i == 0)
      vec.push_back(i);
    if(b % (a / i) == 0)
      vec.push_back(a / i);
  }
  sort(vec.begin(), vec.end());
  cin >> n;
  while(n--){
    cin >> l >> h;
    int div = *(--upper_bound(vec.begin(), vec.end(), h));
    if(div >= l)
      cout << div << endl;
    else
      cout << -1 << endl;
  }

  return 0;
}