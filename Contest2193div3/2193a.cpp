#include <bits/stdc++.h>

using namespace std;

int main () {
  int tc; cin >> tc;

  while (tc--) {
    int n, s, x; cin >> n >> s >> x;

    vector<int> a(n);

    int soma = 0;

    for (int i = 0; i < n; i++) {
      cin >> a[i];
      soma += a[i];
    }

    while (soma < s) {
      soma += x;
    }

    if (soma == s) cout << "YES" << endl;
    else cout << "NO" << endl;
  }
}