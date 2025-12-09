#include <bits/stdc++.h>

using namespace std;

int main () {
  int tc; cin >> tc;

  while (tc--) {
    int n, x;
    cin >> n >> x;
    vector<int>a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    int d, e;

    for(int i = 0; i < n; i++) {
      if (a[i] == 1) {
        d = i;
        break;
      }
    }

    for(int i = n-1; i >= 0; i--) {
      if (a[i] == 1) {
        e = i;
        break;
      }
    }

    if (e - d + 1 <= x) cout << "YES" << endl;
    else cout << "NO" << endl;
  }
}