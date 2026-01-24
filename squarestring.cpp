#include <bits/stdc++.h>

using namespace std;

int main () {
  int tc; cin >> tc;

  while (tc--) {
    string s; cin >> s;

    int n = s.size();

    if (s.size() % 2 != 0) cout << "NO";
    else {
      string a = s.substr(0, n/2);
      string b = s.substr(n/2, n/2);

      if (a == b) cout << "YES";
      else cout << "NO";
    }

    cout << endl;
  }
}