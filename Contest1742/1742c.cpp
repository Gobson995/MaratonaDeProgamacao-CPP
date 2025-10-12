#include <bits/stdc++.h>

using namespace std;

int main () {
  int tc; cin >> tc;

  while (tc--) {
    vector<string> linhas(8);

    for (int i = 0; i < 8; i++) cin >> linhas[i];

    bool ver = false;

    for (int i = 0; i < 8; i++) {
      if (linhas[i] == "RRRRRRRR") {
        ver = true;
        break;
      }
    }

    if (ver) cout << "R" << endl;
    else cout << "B" << endl;
  }
}