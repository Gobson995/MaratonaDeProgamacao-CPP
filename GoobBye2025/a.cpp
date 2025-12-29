#include <bits/stdc++.h>

using namespace std;

int main () {
  int tc; cin >> tc;

  while (tc--) {
    string s; cin >> s;
    
    int y = 0, n = 0;

    for (char c : s) {
      if (c == 'Y') y++;
      else n++;
    }

    if (n == 0) cout << "NO";
    else if (n >= 2) cout << "YES";
    else cout << (y == 1 ? "YES" : "NO");

    cout << endl;
  }
}