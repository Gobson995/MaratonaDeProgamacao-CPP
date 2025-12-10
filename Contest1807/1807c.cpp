#include <bits/stdc++.h>

using namespace std;

int main () {
  int tc; cin >> tc;

  while (tc--) {
    int n; cin >> n;
    string a; cin >> a;
    
    vector<int> opa(26, -1);
    bool verifica = true;

    for (int i = 0; i < n; i++) {
      int x = a[i] - 'a';
      if (opa[x] == -1) opa[x] = i % 2;
      else if (opa[x] != i % 2) verifica = false;
    }

    if (verifica) cout << "YES" << endl;
    else cout << "NO" << endl;
  }
}
