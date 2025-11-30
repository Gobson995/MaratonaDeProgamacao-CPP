#include <bits/stdc++.h>
#define int long long

using namespace std;

signed main () {
  int tc; cin >> tc;

  while (tc--) {
    int n, m; cin >> n >> m;

    vector<int> a(n+1), b(n+1);
    a[0] = 0;
    b[0] = 0;
    for(int i = 1; i <= n; i++) {
      cin >> a[i] >> b[i];
    }

    int resp = 0;

    for (int i = 1; i <= n; i++) {
      int d = a[i] - a[i-1];
      if (b[i] == b[i-1]) {
        resp += (d/2)*2; 
      } else {
        resp += d - (d % 2 == 0);
      }
    }
    resp += (m - a[n]);

    cout << resp << endl;
  }
}