#include <bits/stdc++.h>

using namespace std;

int main () {
  int tc; cin >> tc;

  while (tc--) {
    int n, d; cin >> n >> d;

    string a; cin >> a;
    int i;

    bool opa = false;

    for (i = 0; i < n; i++) {
      if ((a[i] - '0') < d) {
        cout << d;
        d = -1;
        opa = true;
        break;
      }
      cout << a[i];
    }

    for (int j = i; j < n; j++) {
      cout << a[j];
    }

    if (!opa) cout << d;

    cout << endl;
  }
}