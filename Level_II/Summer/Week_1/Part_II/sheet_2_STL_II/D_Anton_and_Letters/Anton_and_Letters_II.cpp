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
  string s;
  getline (std::cin,s);
  //cout<<s.size()<<endl;
  unordered_set<char>st;
  if(s.size()<=2)
    cout<<0;
  else{
    for (int i = 1; i <s.size(); i+=3) {
      st.insert(s[i]);
    }
    cout<<st.size()<<endl;
//    for (auto it = st.begin(); it != st.end(); it++)
//      cout << *it<<" ";

  }

    return 0;
}