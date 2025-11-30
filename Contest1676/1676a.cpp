#include <bits/stdc++.h>

using namespace std;

int main () {
  int tc; cin >> tc;
  while (tc--) {
    string s;
    cin >> s;

    int opa = (s[0]-'0') + (s[1]-'0') + (s[2]-'0');
    int eba = (s[3]-'0') + (s[4]-'0') + (s[5]-'0');

    if (opa == eba) cout << "YES" << endl;
    else cout << "NO" << endl;
  }
}