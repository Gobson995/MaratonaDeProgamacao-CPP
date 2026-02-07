#include <bits/stdc++.h>
#define int long long

using namespace std;

signed main () {
  int tc; cin >> tc;

  while(tc--) {
    int n; cin >> n;

    vector<int> a(n);

    for(int i = 0; i < n; i++) cin >> a[i];

    int mn = *min_element(a.begin(), a.end());

    bool par = false;
    bool impar = false;

    for (int x : a) {
      if (x % 2 == 0) par == true;
      else impar = true;
    }

    if (mn % 2 == 0) {
      cout << "YES" << endl;
    }
    else {
      if (impar && !par) {
        cout << "YES" << endl;
      }
      else cout << "NO" << endl;
    }
  }
}