#include <bits/stdc++.h>

using namespace std;

int main () {
  int tc; cin >> tc;

  while (tc--) {
    vector <int> opa(3);

    for (int i = 0; i < 3; i++) {
      cin >> opa[i];
    }

    sort(opa.begin(), opa.end());

    if (opa[0] + opa[1] == opa[2]) {
      cout << "YES" << endl;
    }
    else {
      cout << "NO" << endl;
    }
  }
}