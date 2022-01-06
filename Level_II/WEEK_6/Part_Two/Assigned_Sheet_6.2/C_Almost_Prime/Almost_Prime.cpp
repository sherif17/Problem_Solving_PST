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
bool isPrime(int n){
  if(n<2)return false;
  for (int i = 0; i*i <n ; ++i) {
    if(n%i==0)return false;
  }
  return true;
}
int count_primes(int num){
  int c=0;
  for(int i=2; i*i<=num; i++){
    if(num % i)
      continue;
    while(num % i == 0)
      num /= i;
    c++;
  }
  return c + (num > 1);
}

int main() {
  fast
  fastIO();
  int n,cnt=0;
  cin >> n;
  for(int i=2; i<=n; i++){
    if(count_primes(i) == 2)
      cnt++;
  }
  cout << cnt;
  return 0;
}