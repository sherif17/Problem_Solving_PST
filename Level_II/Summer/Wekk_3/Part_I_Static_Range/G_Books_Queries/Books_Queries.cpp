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
  int q, l=0,r=0,num;
  char c;
  cin>>q;
  vector<pair<int,char>>freq(200005);
  while (q--){
    cin>>c>>num;
    if(c=='L'){
      freq[num]={++l,c};
    }else if(c=='R'){
      freq[num]={++r,c};
    }else{
      if(freq[num].second=='L'){
        int left= l-freq[num].first;
        int right=(freq[num].first-1)+r;
        cout<<min(left,right)<<"\n";
      }else{
        int left= r-freq[num].first;
        int right=(freq[num].first-1)+l;
        cout<<min(left,right)<<"\n";
      }

    }


  }

    return 0;
}