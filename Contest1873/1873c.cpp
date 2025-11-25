#include <bits/stdc++.h>

using namespace std;

int main () {
  int tc; cin >> tc;

  while (tc--) {
    int resp = 0;

    for (int i = 0; i < 10; i++) {
      for (int j = 0; j < 10; j++) {
        char c; cin >> c;

        if (c == 'X') {
          int opa = min(min(i, j), min(9 - i, 9-j));
          resp += opa + 1;
        }
      }
    }

    cout << resp << endl;
  }
}