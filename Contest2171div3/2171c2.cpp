#include <bits/stdc++.h>
#define int long long

using namespace std;

signed main () {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int tc; cin >> tc;

  while (tc--) {
    int n; cin >> n;
    vector<int> a(n), b(n);

    int xora = 0;
    int xorb = 0;

    for(int i = 0; i < n; i++) {
      cin >> a[i];
      xora ^= a[i];
    }
    for(int i = 0; i < n; i++) {
      cin >> b[i];
      xorb ^= b[i];
    }

    if (xora == xorb) {
      cout << "Tie" << endl; 
      continue; 
    }

    int diferenca = xora ^ xorb;
    int bitdecisivo = 0;
    
    for (int i = 20; i >= 0; i--) {
      if ((diferenca >> i) & 1) {
        bitdecisivo = i;
        break; 
      }
    }

    int ultimo = -1;

    for (int i = 0; i < n; i++) {
      int bita = (a[i] >> bitdecisivo) & 1;
      int bitb = (b[i] >> bitdecisivo) & 1;

      if (bita != bitb) {
        ultimo = i;
      }
    }

    if (ultimo % 2 == 0) {
        cout << "Ajisai" << endl;
    } else {
        cout << "Mai" << endl;
    }
  }
}