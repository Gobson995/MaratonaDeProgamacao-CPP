#include <bits/stdc++.h>

using namespace std;

int main () {
  int tc; cin >> tc;

  while (tc--) {
    int n, k; cin >> n >> k;
    string s; cin >> s;

    int opa = 0;
    int i = 0;

    while (i < n) {
      if (s[i] == 'B') {
        opa++;
        i += k;
      }
      else i++;
    }

    cout << opa << endl;
  }
}