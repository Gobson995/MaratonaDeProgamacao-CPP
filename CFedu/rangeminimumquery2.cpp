#include <bits/stdc++.h>

using namespace std;

int main () {
  int tc; cin >> tc;

  while (tc--) {
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int LOG = 20;
    vector<vector<int>> st(LOG, vector<int>(n));

    for (int i = 0; i < n; i++) st[0][i] = a[i];

    for (int k = 1; k < LOG; k++) {
      for (int i = 0; i + (1 << k) <= n; i++) {
        st[k][i] = min(st[k - 1][i], st[k - 1][i + (1 << (k - 1))]);
      }
    }

    int q; cin >> q;

    while (q--) {
      int l, r; cin >> l >> r;
      int len = r - l + 1;
      int k = __lg(len);

      cout << min(st[k][l], st[k][r - (1 << k) + 1]) << endl;
    }
  }
}