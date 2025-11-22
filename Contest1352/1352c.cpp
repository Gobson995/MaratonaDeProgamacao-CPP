#include <bits/stdc++.h>
#define int long long

using namespace std;

signed main () {
  int tc; cin >> tc;

  while (tc--) {
    int n, k; cin >> n >> k;

    int opa = (k-1) / (n-1);
    int resp = k + opa;

    cout << resp << endl;
  }
}