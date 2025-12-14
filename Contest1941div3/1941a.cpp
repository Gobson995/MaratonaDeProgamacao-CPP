#include <bits/stdc++.h>

using namespace std;

int main () {
  int tc; cin >> tc;

  while (tc--) {
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> a(n),b(m);

    for (int i = 0; i < n; i++) cin >> a[i];
    for (int j = 0; j < m; j++) cin >> b[j];

    int resp = 0;

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if ((a[i] + b[j]) <= k) resp++;
      }
    }

    cout << resp << endl;
  }
}