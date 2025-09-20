#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main () {
  int tc; cin >> tc;

  while (tc--) {
    int x, y; cin >> x >> y;

    if (x < y) {
      cout << 2 << endl;
    }
    else if ((x-1) > y && y > 1 && (x-1) > 2) {
      cout << 3 << endl;
    }
    else {
      cout << -1 << endl;
    }
  }
}