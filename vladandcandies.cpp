#include <bits/stdc++.h>
#define int long long

using namespace std;

signed main () {
  int tc; cin >> tc;

  while (tc--) {
    int n; cin >> n;
    
    int maior = 0, segundo = 0;

    for (int i = 0; i < n; i++) {
      int x; cin >> x;

      if (x > maior) {
        segundo = maior;
        maior = x;
      } 
      else if (x > segundo) {
        segundo = x;
      }
    }

    if (maior <= segundo + 1) cout << "YES" << endl;
    else cout << "NO"<< endl;
  }
}