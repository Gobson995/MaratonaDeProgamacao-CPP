#include <bits/stdc++.h>

using namespace std;

int main () {
  int tc; cin >> tc;
  while (tc--) {
    int n; cin >> n;
    string s; cin >> s;

    int maxi = 0;

    for (int i = 0; i < n; i++) {
      int opa = s[i] - '0' - 48;
      maxi = max(opa, maxi);
    }

    cout << maxi << endl;
  }
}