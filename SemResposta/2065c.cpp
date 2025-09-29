#include <bits/stdc++.h>

using namespace std;

int main () {
  int tc; cin >> tc;

  while (tc--) {
    int n, m; cin >> n >> m;

    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int b; cin >> b;

    bool resp = true;

    for (int i = 0; i < (n-1); i++) {
      if(a[i] > a[i+1]) {
        a[i] = b - a[i];
      }
      if (i != 0){
        if (a[i-1] > a[i]) resp = false;
      }
    }

    if (resp) cout << "YES" << endl;
    else cout << "NO" << endl;
  }
}