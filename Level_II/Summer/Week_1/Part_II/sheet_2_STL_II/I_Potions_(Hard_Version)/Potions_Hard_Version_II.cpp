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
  long long sum=0;
  multiset<long long>mmp;
  long long n,cnt=0;
  long long x;
  cin>>n;
  for (long long i = 0; i < n; ++i) {
    cin>>x;
    if(x>0)
    {
      sum+=x;
      cnt++;

    }else if(x<0){
      mmp.insert(x);
    }
  }
  //cout<<sum<<"\n";
  for (auto it =mmp.rbegin();it!=mmp.rend() ; it++) {
   // cout<<it->first<<" ";
    if((sum+*it)>=0){
      cnt++;
      sum+=*it;
//      cout<<sum<<"\n";
    }
    else
      break;
  }
//    for (auto it :mmp) {
//    cout<<it.first<<" ";
//  }
  cout<<cnt;

  return 0;
}