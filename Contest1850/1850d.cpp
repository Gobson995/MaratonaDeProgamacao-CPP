#include <bits/stdc++.h>

using namespace std;

int main () {
  int tc; cin >> tc;

  while (tc--) {
    int n, k; cin >> n >> k;

    vector<int> a(n);

    for (int i = 0; i < n; i++) cin >> a[i];

    sort(a.begin(), a.end());

    int opa = 1, cont = 1;

    for(int i = 1; i < n; i++) {
      if (a[i] - a[i - 1] <= k) cont++;
      else cont = 1;

      opa = max (opa, cont);
    }

    cout << n - opa << endl;
  }
}