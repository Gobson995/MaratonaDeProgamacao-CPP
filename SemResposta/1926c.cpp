#include <bits/stdc++.h>
#define int long long

using namespace std;

int soma (int x) {
  int resp = 0;
  while (x > 0) {
    resp += x % 10;
    x /= 10;
  }
  return resp;
}


signed main () {
  int tc; cin >> tc;

  while (tc--) {
    int n; cin >> n;

    int resp = 0;

    for(int i = 1; i <= n; i++) resp += soma(i);

    cout << resp << endl;
  }
}