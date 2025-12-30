#include <bits/stdc++.h>

using namespace std;

int main () {
  int tc; cin >> tc;

  while (tc--) {
    string s; cin >> s;
    
    int y = 0;

    for (char c : s) {
      if (c == 'Y') y++;
    }

    if (y <= 1) cout << "YES";
    else cout << "NO";

    cout << endl;
  }
}