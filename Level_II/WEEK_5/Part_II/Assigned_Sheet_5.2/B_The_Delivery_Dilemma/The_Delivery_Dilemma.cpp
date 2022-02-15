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
bool valid(vector<int> &a, vector<int> &b, int t){
  long long sum = 0;
  for(int i=0; i<a.size(); i++)
    if(a[i] > t)
      sum += b[i];
  return sum <= t;
}
int bs(vector<int> &a, vector<int> &b){
  int lo = 0, med, hi = 1e9;
  while(lo < hi){
    med = (lo + hi) / 2;
    if(valid(a, b, med))
      hi = med;
    else
      lo = med + 1;
  }
  return lo;
}

int main() {
  fast
  fastIO();
  int t, n;
  cin>>t;
  while(t--){
    cin>>n;
    vector<int> a(n),b(n);

    for(int &x : a)
      cin >> x;
    for(int &x : b)
      cin >> x;

    cout << bs(a, b) << endl;


  }

    return 0;
}