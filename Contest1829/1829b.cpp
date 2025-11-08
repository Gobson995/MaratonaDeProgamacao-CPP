#include <bits/stdc++.h>

using namespace std;

int main () {
  int tc; cin >> tc;

  while (tc--) {
    int n; cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }

    int maxs = 0, cont = 0;

    for (int i = 0; i < n; i++) {
      if (a[i] == 0) {
        cont++;
        maxs = max(maxs, cont);
      }
      else {
        cont = 0;
      }
    }

    cout << maxs << endl;
  }
}
