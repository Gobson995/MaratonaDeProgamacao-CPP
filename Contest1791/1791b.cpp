#include <bits/stdc++.h>

using namespace std;

int main () {
  int tc; cin >> tc;

  while (tc--) {
    int n; cin >> n;
    string s; cin >> s;

    bool resp = false;
    int x = 0, y = 0;

    for (int i = 0; i < n; i++) {
      if (s[i] == 'U') y++;
      else if (s[i] == 'D') y--;
      else if (s[i] == 'R') x++;
      else x--;

      if (x == 1 && y == 1) {
        resp = true;
        break;
      } 
    }

    if (resp) cout << "YES" << endl;
    else cout << "NO" << endl;
  }
}