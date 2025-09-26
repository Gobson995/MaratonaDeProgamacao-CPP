#include <bits/stdc++.h>

using namespace std;

int main () {
  int tc; cin >> tc;

  while (tc--) {
    int n; cin >> n;

    vector<string> a(n), b(n), c(n);

    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
      cin >> b[i];
    }
    for (int i = 0; i < n; i++) {
      cin >> c[i];
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    sort(c.begin(), c.end());

    int cont1 = 0, cont2 = 0, cont3 = 0;

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        if ()
      }
    }

    cout << cont1 << " " << cont2 << " " << cont3 << endl;
  }
}
