#include <bits/stdc++.h>
#define int long long

using namespace std;

signed main () {
  int tc; cin >> tc;

  while (tc--) {
    int n; cin >> n;

    vector<int> a(n);

    for(int i = 0; i < n; i++) cin >> a[i];

    unordered_map<int, int> freq;
    int soma = 0, resp = 0;

    for (int i = 0; i < n; i++) {
      soma += a[i];
      freq[a[i]]++;

      if (i == 0) {
        if (a[i] == 0) resp++;
        continue;
      }

      if (soma % 2 == 0) {
        int meio = soma / 2;
        if (freq.count(meio)) {
          resp++;
        }
      }
    }

    cout << resp << endl;
  }
}