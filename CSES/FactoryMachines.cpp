#include <bits/stdc++.h>

using namespace std;
using ll = long long;

bool ver (vector<ll> &a, ll n, ll mid, ll t) {
  __int128 soma = 0;
  for (ll i = 0; i < n; i++) {
    soma += mid/a[i];
  }

  if (soma >= t) return true;

  return false;
}

signed main () {
  ll n, t; cin >> n >> t;

  vector<ll> a(n);
  for (ll i = 0; i < n; i++) {
    cin >> a[i];
  }

  ll l = 0, r = 1e18 + 5;
  ll mid, resp = -1;
  while (l<=r) {
    mid = (l+r)/2;
    if (ver(a, n, mid, t)) {
      resp = mid;
      r = mid - 1;
    }
    else {
      l = mid + 1;
    }
  }

  cout << resp << endl;
}
