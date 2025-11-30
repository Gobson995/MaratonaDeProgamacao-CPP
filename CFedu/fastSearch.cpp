#include <bits/stdc++.h>
#define int long long

using namespace std;

signed main () {
  int n; cin >> n;

  vector<int> a(n);

  for (int i = 0; i < n; i++) cin >> a[i];

  sort(a.begin(),a.end());

  int k; cin >> k;

  while (k--) {
    int l, r; cin >> l >> r;

    int left = 0, right = n, resp = -1;

    while (left<right) {
      int mid = (left+right)/2;
      if (a[mid] <= r) {
        left = mid + 1;
      }
      else {
        right = mid;
      }
    }
    resp = left;

    int lo = 0, ro = n, resp2;
    while (lo < ro) {
      int mid = (lo + ro)/2;
      if (a[mid] < l) {
        lo = mid + 1;
      }
      else {
        ro = mid;
      }
    }
    resp2 = lo;

    int ans = resp - resp2;

    cout << ans << " ";


  }
  cout << endl;
}