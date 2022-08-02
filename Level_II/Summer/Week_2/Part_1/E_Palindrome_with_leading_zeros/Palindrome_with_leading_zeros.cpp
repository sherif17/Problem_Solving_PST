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
int checkPalindrome(string str) {
  int len = str.length();

  for (int i = 0; i < len / 2; i++) {

    if (str[i] != str[len - i - 1])
      return false;
  }
  return  true;
}

  int main() {
  fast
  fastIO();
  string n;
  cin>>n;
  while (n.back()=='0'){
    n.pop_back();
  }
  if(checkPalindrome((n))){
    cout<<"Yes";
  }else
    cout<<"No";




    return 0;
}