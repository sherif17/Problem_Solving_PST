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
    long long n,x,q,index,l,r;
    cin>>n;
    vector<long long>vec(n+1);
    vector<long long>sortedVec(n+1);
    vec.push_back(0);
    sortedVec.push_back(0);
    for (long long i = 1; i <=n; ++i) {
      cin>>x;
      sortedVec.push_back(x);
      if(i>1){
        vec.push_back(x+vec[i-1]);
      }else{
        vec.push_back(x);
      }
    }
    sort(sortedVec.begin(),sortedVec.end());
    for (long long i = 1; i <=sortedVec.size() ; ++i) {
      sortedVec[i]+=sortedVec[i-1];
    }
    cin>>q;
    while (q--){
      cin>>index>>l>>r;
      if(index==1){
        cout<<vec[r]-vec[l-1];
      } else{
        cout<<sortedVec[r]-sortedVec[l-1];
      }
      cout<<"\n";
    }


    return 0;
  }