#include <bits/stdc++.h>

using namespace std;

int main () {
  int tc; cin >> tc;

  while(tc--) {
    int n; cin >> n;

    vector<int> a(n);

    int total = 0;

    for(int i = 0; i < n; i++) {
      cin >> a[i];
      total += a[i];
    }

    int impares = 0;

    for(int x : a) {
      if (x % 2 == 1) impares++;
    }

    if (impares % 2 == 0) {
      cout << 0 << endl;
      continue;
    }

    int resp = 1e9;

    for (int x : a) {
      if (x % 2 == 1) {
        int conta = 0;
        while(x % 2 == 1) {
          x /= 2;
          conta++;
        }
        resp = min(resp, cont);
      }
    }

    cout << resp << endl;
  }
}