// binary search

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

bool ver(vector<ll> a, long double soma, ll mid, ll n, ll opa) {
  long double media = (long double)(soma + mid)/(2.0*n);

  if (media > opa) {
    return true;
  }
  else {
    return false;
  }
}


int main () {
  ll tc; cin >> tc;

  while (tc--) {
    int n; cin >> n;

    vector<ll> a(n);
    long double soma = 0;

    for (ll i = 0; i < n; i++) {
      cin >> a[i];
      soma += a[i];
    }

    sort(a.begin(), a.end());

    ll opa;
    if (n % 2 == 0) {
      opa = a[(n/2)];
    }
    else {
      opa = a[n/2];
    }

    if (n == 1 || n == 2) {
      cout << -1 << endl;
    }
    else {
    if (ver(a, soma, 0, n, opa)) {
      cout << 0 << endl;
    }
    else {
      ll l = 0, r = 1e15, resp = -1;
      while (l<=r) {
        ll mid = (l+r)/2;
        if (ver(a, soma, mid, n, opa)) {
          resp = mid;
          r = mid - 1;
        }
        else {
          l = mid + 1;
        }
      }
      cout << resp << endl;
    }
    }
  }
}