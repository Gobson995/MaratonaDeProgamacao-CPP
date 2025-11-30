#include <bits/stdc++.h>
#define int long long

using namespace std;

signed main () {
  int n, k; cin >> n >> k;

  vector<int> a(n), b(k);

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  for (int i = 0; i < k; i++) {
    cin >> b[i];
  }

  int opa = 0;
  while (opa < k) {
    int l = 0, r = n - 1;
    bool resp = false;

    while (l <= r) {
      int mid = (l+r)/2;
      if (a[mid] == b[opa]) {
        resp = true;
        break;
      }
      else if (a[mid] > b[opa]) {
        r = mid - 1;
      }
      else {
        l = mid + 1;
      }
    }

    if (resp) cout << "YES" << endl;
    else cout << "NO" << endl;

    opa++;
  }
}