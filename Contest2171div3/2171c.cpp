#include <bits/stdc++.h>
#define int long long

using namespace std;

signed main () {
  int tc; cin >> tc;

  while (tc--) {
    int n; cin >> n;
    vector<int> a(n), b(n);

    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];

    int opa =0, eita = -1;

    for (int i = 0; i < n; i++) {
      if (a[i] != b[i]) {
        opa++;
        eita = i;
      }
    }


    if (opa % 2 == 0) {
      cout << "Tie" << endl;
    }
    else {
      if (eita % 2 == 0) {
        cout << "Ajisai" << endl;
      }
      else {
        cout << "Mai" << endl;
      }
    }
  }
}
