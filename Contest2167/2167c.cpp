#include <bits/stdc++.h>
#define int long long

using namespace std;

signed main () {
  int tc; cin >> tc;

  while (tc--) {
    int n; cin >> n;
    vector<int> a(n);
    
    int contp = 0, conti = 0;

    for (int i = 0; i < n; i++) {
      cin >> a[i];

      if (a[i] % 2 == 0) contp++;
      else conti++;
    }

    if (contp == 0 || conti == 0) {
      for (int i = 0; i < n; i++) {
        if (i == (n-1)) cout << a[i] << endl;
        else cout << a[i] << " ";
      }
    }
    else {
      sort(a.begin(), a.end());
      for (int i = 0; i < n; i++) {
        if (i == (n-1)) cout << a[i] << endl;
        else cout << a[i] << " ";
      }
    }
  }
}