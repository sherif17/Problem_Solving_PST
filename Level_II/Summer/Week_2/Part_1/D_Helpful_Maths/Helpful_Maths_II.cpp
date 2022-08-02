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
  cin>>s;
  vector<char>vec;
  for (int i = 0; i<s.size() ; i+=2) {
    vec.push_back(s[i]);
  }
  sort(vec.begin(),vec.end());
  for (int i = 0; i <vec.size(); ++i) {
    cout<<vec[i];
    if(i!=vec.size()-1)
      cout<<"+";
  }

  return 0;
}