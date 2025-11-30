#include <bits/stdc++.h>

using namespace std;

int main () {
  int tc; cin >> tc;

  while (tc--) {
    int n; cin >> n;

    vector<int> a(n);
    vector<int> pari(n);

    for (int i = 0; i < n; i++) {
      cin >> a[i];
      if (a[i] % 2 == 0) {
        pari[i] = 0;
      }
      else {
        pari[i] = 1;
      }
    }

    bool ver = true;

    for (int i = 0; i < (pari.size() - 2); i++) {
      if (pari[i] == pari[i+1] && pari[i] != pari[i+2]) ver = false;
      else if (pari[i] != pari[i+1] && pari[i+1] == pari[i+2]) ver = false;
    }

    if (ver) cout << "YES" << endl;
    else cout << "NO" << endl;
  }

 
}