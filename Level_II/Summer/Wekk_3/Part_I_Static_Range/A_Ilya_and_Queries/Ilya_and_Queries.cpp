#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
void fastIO() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  freopen("error.txt", "w", stderr);
#endif
}
const int N=1e5+5;
int main() {
  fast fastIO();
  string s;
  cin >> s;
  int n = s.size();
 // int arr[N+1]={0}, prefixSum[N+1];
 // vector<int> vec;
  vector<int> prefixSum(n + 1);
  prefixSum[0]=0;
  s='*'+s;

//  for (int i = 1; i <= n; ++i) {
//    if (s[i] == '.')
//      arr[i]=1;
//     // vec.push_back(1);
//    else
//      arr[i]=0;
//    //vec.push_back(0);
//  }
  //prefixSum[0] = arr[0];
  int sum=0;
  for (int i = 1; i <= n; ++i) {
    if (s[i] == s[i-1]){
      sum++;
    }
//      prefixSum[i] = arr[i] + prefixSum[i - 1];
//    else
      prefixSum[i] = sum;
  }
  int q, l, r;
  cin >> q;
//  for (int i = 1; i <=n; ++i) {
//    cout << prefixSum[i];
//  }
 // cout << "\n";
  while (q--) {
    cin >> l >> r;
    cout << (prefixSum[r] - prefixSum[l]) << '\n';
  }

  return 0;
}