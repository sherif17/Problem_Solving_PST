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

const int sz=1e6+10;
bool composite[sz];//not prime
vector<long long>prime;

void linear_sieve()
{
  composite[0]=composite[1]=1;
  for (long long i=2; i<=sz; ++i)
  {
    if (!composite[i])
    {
      prime.push_back(i);
    }
    for (long long j=0; j<(long long)prime.size()&&i*prime[j]<=sz; ++j)
    {
      composite[i * prime[j]] = 1;
      if (i%prime[j]==0) break;

    }
  }
}
int main() {
  fast
  fastIO();
  linear_sieve();
  long long t, d;
  cin >> t;
  while(t--){
    cin >> d;
    long long n1 = *upper_bound(prime.begin(), prime.end(), d);
    long long n2 = *lower_bound(prime.begin(), prime.end(), n1 + d);
    cout << min(1ll * n1 * n2, 1ll * n1 * n1 * n1) << endl;
  }

    return 0;
}