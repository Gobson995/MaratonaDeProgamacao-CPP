#include <bits/stdc++.h>
#define int long long

using namespace std;

signed main() {
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    vector<int> a(n + 1);
    int prox = n;
    int antes = 0;

    for (int i = 1; i <= n; i++) {
      int atualb;
      cin >> atualb;

      int ultimaoc = i + antes - atualb;

      if (ultimaoc == 0) {
        a[i] = prox;
        prox--;
      }
      else {
        a[i] = a[ultimaoc];
      }

      antes = atualb;
    }

    for (int i = 1; i <= n; i++) {
      if (i == n) cout << a[i] << endl;
      else cout << a[i] << " ";
    }
  }
}