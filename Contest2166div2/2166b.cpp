#include <bits/stdc++.h>
#define int long long

using namespace std;

signed main () {
  int tc; cin >> tc;

  while (tc--) {
    int a, b, n; cin >> a >> b >> n;

    int opa = a / b;

    if (n <= opa || a == b) cout << 1 << endl;
    else cout << 2 << endl;
  }
}