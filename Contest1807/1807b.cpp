#include <bits/stdc++.h>

using namespace std;

int main () {
  int tc; cin >> tc;

  while (tc--) {
    int n; cin >> n;
    vector<int> a(n), par, impar;
    int contpar = 0, contimpar = 0;

    for (int i = 0; i < n; i++) {
      cin >> a[i];

      if (a[i] % 2 == 0) {
        par.emplace_back(a[i]);
        contpar++;
      }
      else {
        impar.emplace_back(a[i]);
        contimpar++;
      }
    }

    sort(par.begin(), par.end());
    reverse(par.begin(), par.end());
    sort(impar.begin(), impar.end());

    bool resp = true;
    int contp = 0, conti = 0;
    
    for (int i = 0; i < contimpar; i++) {
      conti += impar[i];
    }
    for (int i = 0; i < contpar; i++) {
      contp += par[i];
    }

    if (contp <= conti) resp = false;

    if (resp) cout << "YES" << endl;
    else cout << "NO" << endl;
  }
}
