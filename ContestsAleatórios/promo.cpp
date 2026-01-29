#include <bits/stdc++.h>
#define int long long

using namespace std;

signed main () {
  int n, q; cin >> n >> q;

  vector<int> p(n);

  for(int i = 0; i < n; i++) cin >> p[i];

  sort(p.begin(), p.end());

  vector<int> pref(n+1, 0);

  for(int i = 0; i < n; i++) {
    pref[i+1] = pref[i] + p[i];
  }

  while (q--) {
    int x, y;
    cin >> x >> y;

    int comeco = n - x;

    int resp = pref[comeco + y] - pref[comeco];

    cout << resp << endl;
  }
}