#include <bits/stdc++.h>
#define int long long

using namespace std;

signed main () {
  int tc; cin >> tc;

  while (tc--) {
    int n; cin >> n;

    vector<int> a(n);

    for(int i = 0; i < n; i++) cin >> a[i];

    int q; cin >> q;

    while(q--) {
      int i, j; cin >> i >> j;

      int resp = LLONG_MAX;

      for (int opa = i; opa <= j; opa++) {
        resp = min(resp,a[opa]);
      }

      cout << resp << endl;
    }
  }
}