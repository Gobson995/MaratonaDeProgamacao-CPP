#include <bits/stdc++.h>
#define int long long

using namespace std;

signed main () {
  int tc; cin >> tc;

  while (tc--) {
    int n; cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    sort(a.begin(), a.end());

    vector<int> r(n/2);
    int cont = 0;

    for (int i = 0; i < (n/2); i++) {
      r[i] = a[cont + 1] - a[cont];
      cont += 2;
    }

    sort(r.begin(), r.end());

    cout << r[(n/2) - 1] << endl;
  }
}