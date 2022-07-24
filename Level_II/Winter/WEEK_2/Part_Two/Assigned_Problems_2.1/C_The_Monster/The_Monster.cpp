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
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  for(int i=0; i<=100; i++){
    for(int j=0; j<=100; j++){
      if(b + i * a == d + j * c){
        cout << b + i * a ;
        return 0;
      }
    }
  }
  cout << -1;

    return 0;
}