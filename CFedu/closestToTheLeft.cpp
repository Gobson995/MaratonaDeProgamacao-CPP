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
    int l = 0, r = n - 1, resp = 0;
    while (l <= r) {
      int mid = (l+r)/2;
      if (a[mid] <= b[opa]) {
        resp = mid + 1;
        l = mid + 1;
      }
      else {
        r = mid - 1;
      } 
    }
    cout << resp << endl;
    
    opa++;
  }
}