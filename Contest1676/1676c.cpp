#include <bits/stdc++.h>

using namespace std;

int main () {
  int tc; cin >> tc;

  while (tc--) {
    int n, m; cin >> n >> m;

    vector<string> a(n);
    
    for (int i = 0; i < n; i++) cin >> a[i];

    int resp = INT_MAX;

    for (int i = 0; i < n; i++) {
      for (int j = i + 1; j < n; j++) {
        int opa = 0;
        for (int k = 0; k < m; k++) {
          opa += abs(a[i][k] - a[j][k]);
        }
        resp = min(resp, opa);
      }
    }

    cout << resp << endl;
  }
}