#include <bits/stdc++.h>
#define int long long

using namespace std;

signed main () {
  int tc; cin >> tc;

  while (tc--) {
    int n, w; cin >> n >> w;

    int resp = n - (n/w);
    cout << resp << endl;
  }
}