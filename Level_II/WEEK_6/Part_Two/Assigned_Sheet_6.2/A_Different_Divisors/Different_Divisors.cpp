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
bool isPrime(int num)
{
  for (int i = 2; i*i<=num ; ++i) {
    if(num%i==0)
      return 0;
  }
  return 1;
}

int main() {
  fast
  fastIO();
  vector<int>primes;
  for (int i = 2; i <100000 ; i+=1+(i&1)) {
    if(isPrime(i))
      primes.push_back(i);
  }
  int t,d;
  cin>>t;
  while (t--)
  {
    cin>>d;
    int x = *upper_bound(primes.begin(), primes.end(), d);
    int y = *lower_bound(primes.begin(), primes.end(), x + d);
    cout << min(1ll * x * y, 1ll * x * x * x) << endl;
  }

    return 0;
}