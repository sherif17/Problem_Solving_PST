#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
void fastIO() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  freopen("error.txt", "w", stderr);
#endif
}

int main() {
  fast fastIO();
  long  long n;
  cin >> n;
  if (n % 2 == 0) {
    long long numOfOdd = n / 2;
    long long numOfEven = n - numOfOdd;
    cout << (numOfEven * (numOfEven + 1)) - (numOfOdd * numOfOdd);
  } else {
    long long numOfOdd = (n / 2)+1;
    long long numOfEven = n - numOfOdd;
    cout << (numOfEven * (numOfEven + 1)) - (numOfOdd * numOfOdd);

  }

  return 0;
}