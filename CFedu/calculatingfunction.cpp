#include <bits/stdc++.h>
#define int long long

using namespace std;

signed main () {
  int n; cin >> n;

  if (n % 2 == 0) cout << n/2;
  else cout << -(n+1)/2;

  cout << endl;
}