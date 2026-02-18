#include <bits/stdc++.h>
#define int long long

using namespace std;

signed main () {
  int n, m; cin >> n >> m;

  int sets = n / m;
  int resto = n % m;

  if (resto != 0) {
    if (sets % 2 == 0) cout << "MARCEL";
    else cout << "JOAOZAO";
  }
  else {
    if (sets % 2 == 0) cout << "MARCEL";
    else cout << "JOAOZAO";
  }

  cout << endl;
}