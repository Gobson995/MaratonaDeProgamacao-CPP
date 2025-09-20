#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main () {
  int tc; cin >> tc;

  while (tc--) {
    int n; cin >> n;

    vector<int> a;

    int opa = n;
    
    for (int i = 0; i < n; i++) {
      a.emplace_back(opa);
      opa--;
    }

    a.emplace_back(n);

    for (int i = 1; i < n; i++) {
      a.emplace_back(i);
    }

    for (int i = 0; i < n*2; i++) {
      cout << a[i] << " ";
    }
    cout << endl;
  }
}