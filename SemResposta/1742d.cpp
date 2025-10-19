#include <bits/stdc++.h>
#define int long long
using namespace std;

bool coprimos(int a, int b) {
  while (b != 0) {
    int resto = a % b;
    a = b;
    b = resto;
  }
  if (a == 1) return true;
  else return false;
}

signed main () {
  int tc; cin >> tc;

  while (tc--) {
    int n; cin >> n;
    vector<int> a(n);

    for(int i = 0; i < n; i++) cin >> a[i];

    int resp = -1;

    for(int i = 0; i < n; i++) {
      for(int j = 0; j < n; j++) {
        if (coprimos(a[i], a[j])) resp = max(resp, (i+j) + 2);
      }
    }
    
    cout << resp << endl;
  }
}