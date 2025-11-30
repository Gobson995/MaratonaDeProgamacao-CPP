#include <bits/stdc++.h>

using namespace std;

int main () {
  int tc; cin >> tc;

  while (tc--) {
    int n; cin >> n;

    string cor; cin >> cor;

    bool ver = true;
    int contar = 0, contab = 0;

    for (int i = 0; i <= n; i++) {
      if (i == n || cor[i] == 'W') {
        if ((contar > 0 || contab > 0) && (contar == 0 || contab == 0)) {
          ver = false;
          break;
        }

        contar = 0;
        contab = 0;
      }
      else {
        if (cor[i] == 'R') contar++;
        else if (cor[i] == 'B') contab++;
      }
    }

    if (ver) cout << "YES" << endl;
    else cout << "NO" << endl;
  }
}