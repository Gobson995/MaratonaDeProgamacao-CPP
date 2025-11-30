#include <bits/stdc++.h>

using namespace std;

int main () {
  int tc; cin >> tc;

  while (tc--) {
    int n; cin >> n;
    string a, b;
    cin >> a;
    cin >> b;

    vector<int> cima(n), baixo(n);

    for (int i = 0; i < n; i++) {
      if (a[i] == 'R') {
        cima[i] = 2;
      }
      else {
        cima[i] = 3;
      }
    }

    for (int i = 0; i < n; i++) {
      if (b[i] == 'R') {
        baixo[i] = 2;
      }
      else {
        baixo[i] = 3;
      }
    }

    bool resp = true;
    for (int i = 0; i < n; i++) {
      if (cima[i] != baixo[i]) resp = false;
    }

    if (resp) {
      cout << "YES" << endl;
    }
    else cout << "NO" << endl;
  }
}