#include <bits/stdc++.h>

using namespace std;

int main () {
  int tc; cin >> tc;

  while (tc--) {
    string a; cin >> a;
    int conta = 0, contb = 0;

    for (int i = 0; i < 5; i++) {
      if (a[i] == 'A') conta++;
      else contb++;
    }

    if (conta > contb) cout << "A" << endl;
    else cout << "B" << endl;
  }
}