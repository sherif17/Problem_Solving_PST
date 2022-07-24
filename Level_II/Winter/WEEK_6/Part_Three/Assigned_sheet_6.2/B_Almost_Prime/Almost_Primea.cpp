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
const static int sz=1e6+10;
bool composite[sz];
vector<long long>prime;

void linearSieve(){
  composite[0]=composite[1]=1;
  for (int i = 2; i <sz ; ++i) {
    if(!composite[i])
      prime.push_back(i);
    for (int j=0; j<(int)prime.size()&&i*prime[j]<=sz; ++j)
    {
      composite[i * prime[j]] = 1;
      if (i%prime[j]==0) break;
    }
  }
}
int countPrimes(int n) {
  linearSieve();
  int cnt=0;
  for (int i=0;i<n;i++)
  {
    if (!composite[i]){cnt++;}
  }
  return cnt;
}
int main() {
  fast
  fastIO();
  int n;
  cin>>n;
  cout<<countPrimes(n);

    return 0;
}