#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc; cin >> tc;
    while (tc--) {
      int n;
      cin >> n;
      vector<int> p(n), pos(n+1);

      for (int i = 0; i < n; i++) {
        cin >> p[i];
        pos[p[i]] = i;
      }

      int minimo = pos[n], maximo = pos[n];

      bool ver = true;
      
      for (int i = n; i > 0; i--) {
          minimo = min(minimo, pos[i]);
          maximo = max(maximo, pos[i]);

          int qtd = n - i + 1; 

          if (maximo - minimo + 1 != qtd) {
            ver = false;
            break;
          }
      }

      if (ver) cout << "YES" << endl;
      else cout << "NO" << endl;
    }
}