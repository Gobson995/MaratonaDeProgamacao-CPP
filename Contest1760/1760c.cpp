#include <bits/stdc++.h>

using namespace std;

int main () {
  int tc; cin >> tc;

  while (tc--) {
    int n; cin >> n;
    vector<int> a(n),b(n);

    for (int i = 0; i < n; i++) {
      cin >> a[i];
      b[i] = a[i];
    }

    sort(b.begin(), b.end());
    int maior = b[n-1], semi = b[n-2];

    for (int i = 0; i < n; i++) {
      if (a[i] != maior) b[i] = a[i] - maior;
      else b[i] = maior - semi;
    }

    for (int i = 0; i < n; i++) {
      if (i == n-1) cout << b[i] << endl;
      else cout << b[i] << " ";
    }
  }
}