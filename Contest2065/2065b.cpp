#include <bits/stdc++.h>

using namespace std;

int main () {
  int tc; cin >> tc;

  while (tc--) {
    string s; cin >> s;

    int cont = 0;

    for (int i = 1; i < s.size(); i++) {
      if (s[i] == s[i-1]) {
        cont++;
        break;
      }
    }

    if (cont != 0) cout << 1 << endl;
    else cout << s.size() << endl;
  }
}