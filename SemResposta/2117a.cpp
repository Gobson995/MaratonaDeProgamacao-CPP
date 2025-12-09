#include <bits/stdc++.h>

using namespace std;

int main () {
  int tc; cin >> tc;

  while (tc--) {
    int n, x;
    cin >> n >> x;
    vector<int>a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    bool opa = false;

    for (int i = 0; i < n; i++) {
      if (a[i] == 1) {
        int esq = n - i;
        if (esq <= x) opa = true;
      }
    }

    if (opa) cout << "NO" << endl;
    else cout << "YES" << endl;
  }
}