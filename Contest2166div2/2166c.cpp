#include <bits/stdc++.h>
#define int long long

using namespace std;

signed main () {
  int tc; cin >> tc;

  while (tc--) {
    int n; cin >> n;
    vector<int> a(n);

    for(int i = 0; i < n; i++) cin >> a[i];

    int soma = 0, maxi = 0;

    for(int i = 0; i < n; i++) {
      int opa = max(a[i], a[(i+1) % n]);
      soma += opa;
      maxi = max(maxi, opa);
    }

    cout << soma - maxi << endl;
  }
}