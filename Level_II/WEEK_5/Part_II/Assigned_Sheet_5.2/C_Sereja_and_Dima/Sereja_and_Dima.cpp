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

int main() {
  fast fastIO();
  int n,c, seraj = 0, dima = 0, turn=0;
  cin >> n;
  vector<int> vec(n);
  for (int &x : vec) {
    cin >> x;
  }
  for(int i=0,j=n-1;i<=j;){
    if(vec[i]>vec[j]){
      c=vec[i];
      i++;

    }else{
      c=vec[j];
      j--;
    }
    if(turn ==0){
      seraj+=c;

    }else{
      dima+=c;
    }
    turn=!turn;
  }
  cout<<seraj<<" "<< dima<<endl;

  return 0;
}