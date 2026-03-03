#include <bits/stdc++.h>

using namespace std;

int main () {
  int n, m; cin >> n >> m;

  vector<int> a(n), b(m), c(n+m);

  for(int i = 0; i < n; i++) cin >> a[i];

  for(int i = 0; i < m; i++) cin >> b[i];

  int k = 0, j = 0, i = 0;

  while (i < a.size() || j < b.size()) {
    if (j == b.size() || i < a.size() && a[i] < b[j]) {
      c[k] = a[i];
      i++;
      k++;
    }
    else {
      c[k] = b[j];
      j++;
      k++;
    }
  }

  for(int i = 0; i < (m+n); i++) {
    if (i == (m+n-1)) cout << c[i] << endl;
    else cout << c[i] << " ";
  }
}