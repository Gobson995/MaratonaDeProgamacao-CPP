#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
  int tc; 
  cin >> tc;

  while (tc--) {
    int n; cin >> n;

    int resp = -1, opa = -1;
    

    for(int i = 0; i < n; i++) {
      int x, y; cin >> x >> y;

      if (x <= 10) {
        if (y > opa) {
          opa = y;
          resp = i;
        }
      }
    }

    cout << resp + 1 << endl;
  }
}