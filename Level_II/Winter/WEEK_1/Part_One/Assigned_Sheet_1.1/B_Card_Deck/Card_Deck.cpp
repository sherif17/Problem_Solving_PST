#include <bits/stdc++.h>
using namespace std;

void fastIO() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  freopen("error.txt", "w", stderr);
#endif
}

void Print(vector<int> &v, int st, int end){
  for(int i=st; i<=end; i++)
    cout << v[i] << " ";
}

int main() {
  fastIO();
  int t,n;
  cin>>t;
  while(t--)
  {
    cin>>n;
    int mx_idx=0;
    vector <int> v(n), last_mx_idx(n);

    for(int &x : v)
      cin >> x;

    for(int i=0; i<v.size(); i++){

      if(v[i] > v[mx_idx])
        mx_idx = i;

      last_mx_idx[i] = mx_idx;
    }

    for(int i=n-1; i>-1; i = last_mx_idx[i] - 1)
      Print(v, last_mx_idx[i], i);
    cout << endl;
  }

  return 0;
}