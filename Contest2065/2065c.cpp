#include <bits/stdc++.h>
#define int long long

using namespace std;

signed main () {
  int tc; cin >> tc;

  while (tc--) {
    int n, m; cin >> n >> m;

    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int b; cin >> b;

    bool resp = true;
    int ultimo = -1e18;

    for (int i = 0; i < n; i++) {
      int normal = a[i];
      int teste = b - a[i];

      if (normal >= ultimo && teste >= ultimo) {
        ultimo = min(normal, teste);
      }
      else if (normal >= ultimo) {
        ultimo = normal;
      }
      else if (teste >= ultimo) {
        ultimo = teste;
      }
      else {
        resp = false;
        break;
      }
    }
    

    if (resp) cout << "YES" << endl;
    else cout << "NO" << endl;
  }
}