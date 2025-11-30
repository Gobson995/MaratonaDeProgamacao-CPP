#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main () {
  int tc; cin >> tc;

  while (tc--) {
    int x, y, k; cin >> x >> y >> k;

    int resp, opax, opay;

    opax = (k + x - 1)/k;
    opay = (k + y - 1)/k;

    resp = max(opax * 2 - 1, opay * 2);

    cout << resp << endl;
  }
}