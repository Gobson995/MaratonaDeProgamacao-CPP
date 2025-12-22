#include <bits/stdc++.h>
#define int long long

using namespace std;

signed main () {
  int tc; cin >> tc;

  vector<int> primos = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53};

  while (tc--) {
    int n; cin >> n;

    vector<int> a(n);

    for(int i = 0; i < n; i++) cin >> a[i];

    int resp = -1;

    for (int p : primos) {
      bool opa = false;
      for(int i = 0; i < n; i++) {
        if(a[i] % p != 0) {
          opa = true;
          break;
        }
      }

      if (opa) {
        resp = p;
        break;
      }
    }

    cout << resp << endl;
  }
}