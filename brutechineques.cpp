#include <bits/stdc++.h>
#define int long long

using namespace std;

signed main () {
  int n; cin >> n;

  vector<int> a(n), b(n);

  for(int i = 0; i < n; i++) cin >> a[i];

  for(int i = 0; i < n; i++) cin >> b[i];

  int resp = LLONG_MAX;

  for(int i = 0; i < n; i++) {
    resp = min(resp, b[i]/ a[i]);
  }

  cout << resp << endl;

}