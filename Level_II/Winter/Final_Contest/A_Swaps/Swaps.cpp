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
void solve(){
  int n , k ,x,res=0;
  cin>>n>>k;
  deque<int>vecA,vecB;


  for (int i = 0; i < n; ++i) {
    cin>>x;
    vecA.push_back(x);
  }
  for (int i = 0; i < n; ++i) {
    cin>>x;
    vecB.push_back(x);
  }
//  for(auto it :vecA){
//    cout<< it<<" ";
//    //res+=it;
//  }
 // cout<<endl;
  sort(vecA.begin(),vecA.end());
  sort(vecB.begin(),vecB.end());
  int i=0;

  while (k--){
    for (;i < n;) {
      if(vecA[i]<vecB[n-i]){
        vecA.pop_front();
        vecA.push_back(vecB.back());
        vecB.pop_back();
        //cout<<"hi";
        break;
      }
      else {
        //break;
      }
      i++;

    }


  }
  for(auto it :vecA){
    //cout<< it<<" ";
    res+=it;
  }
  cout<<res<<endl;
}

int main() {
  fast
  fastIO();
  int t;
  cin>>t;
  while (t--){
    solve();
  }

    return 0;
}