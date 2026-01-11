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

    if (total % 2 == 0) {
      cout << 0 << endl;
      continue;
    }

    int resp = 1e9;

    for (int x : a) {
      int conta = 0;
      int paridade = x % 2;
      while(x > 0 && x % 2 == paridade) {
        x /= 2;
        conta++;
      }
      resp = min(resp, conta);
    }
    cout << resp << endl;
  }
}