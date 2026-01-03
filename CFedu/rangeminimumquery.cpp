#include <bits/stdc++.h>
#define int long long

using namespace std;

const int N = 1e5 + 5;
int a[N], b[N];

signed main () {
  int tc; cin >> tc;

  while (tc--) {
    int n; cin >> n;

    for(int i = 0; i < n; i++) cin >> a[i];

    int s = sqrt(n) + 1;
    int blocos = (n + s - 1) / s;

    for (int i = 0; i < blocos; i++) b[i] = INT_MAX;

    for (int i = 0; i < n; i++) b[i/s] = min(b[i/s], a[i]);

    int q; cin >> q;

    while(q--) {
      int l, r; cin >> l >> r;

      int resp = INT_MAX;

      while(l <= r) {
        if(l % s == 0 && l + s - 1 <= r) {
          resp = min(resp, b[l/s]);
          l += s;
        }
        else {
          resp = min(resp, a[l]);
          l++;
        }
      }

      cout << resp << endl;
    }
  }
}