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
bool is_prime(int num){
  for(int i=2; i*i <= num; i++)
    if(num % i == 0)
      return 0;
  return 1;
}

int main() {
  fast
  fastIO();
  vector<long long>vec;
  for(int i=2; i<1000000; i++)
    if(is_prime(i))
      vec.push_back(1ll * i * i);

  long long n;
  cin >> n;
  long long x;
  while(n--){
    cin >> x;
    cout << (binary_search(vec.begin(), vec.end(), x)?"YES":"NO") << endl;
  }
  return 0;
}