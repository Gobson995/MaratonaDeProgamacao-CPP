#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main () {
  int tc; cin >> tc;

  while (tc--) {
    int n; cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }

    vector<int> par, impar;
    for (int i = 0; i < n; i++) {
      if (a[i] % 2 == 0) {
        par.emplace_back(a[i]);
      }
      else {
        impar.emplace_back(a[i]);
      }
    }

    bool modo = false;
    int soma = 0;

    sort (impar.begin(), impar.end());
    reverse(impar.begin(), impar.end());

    

    if (impar.size() == 0) {
      cout << soma << endl;
    }
    else if (impar.size() % 2 == 0) {
      for (int i = 0; i < (impar.size()/2); i++) {
        soma += impar[i];
      }
      for (int i = 0; i < par.size(); i++) {
        soma += par[i];
      }
      cout << soma << endl;
    }
    else {
      for (int i = 0; i < par.size(); i++) {
        soma += par[i];
      }
      for (int i = 0; i < ((impar.size()+1)/2); i++) {
        soma += impar[i];
      }
      cout << soma << endl;
    }
  }
}