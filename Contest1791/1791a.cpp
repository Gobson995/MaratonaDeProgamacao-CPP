#include <bits/stdc++.h>

using namespace std;

int main () {
  int tc; cin >> tc;

  while (tc--) {
    char opa; cin >> opa;
    string a = "codeforces";

    bool resp = false;

    for (int i = 0; i < 10; i++) {
      if (a[i] == opa) resp = true;
    }

    if (resp) cout << "YES" << endl;
    else cout << "NO" << endl;
  }
}