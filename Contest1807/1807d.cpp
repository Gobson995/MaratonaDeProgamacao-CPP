#include <bits/stdc++.h>
#define int long long

using namespace std;

signed main () {
  int tc; cin >> tc;

  while (tc--) {
    int n, q;
    cin >> n >> q;

    vector<int> a(n), pref(n+1, 0);

    for (int i = 0; i < n; i++) {
      cin >> a[i];
      pref[i+1] = pref[i] + a[i];
    }
    
    int total = pref[n];

    while(q--) {
      int l, r, k;
      cin >> l >> r >> k;

     int intervalo = pref[r] - pref[l-1];
     int soma = total - intervalo + (r - l + 1) * k;

      if(soma % 2 == 0) cout << "NO" << endl;
      else cout << "YES" << endl;
    }
  }
}