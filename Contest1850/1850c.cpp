#include <bits/stdc++.h>

using namespace std;

int main () {
  int tc; cin >> tc;

  while (tc--) {
    vector<string> a(8);
    vector<char> b;

    for(int i = 0; i < 8; i++) {
      cin >> a[i];

      for (int j = 0; j < 8; j++) {
        if (a[i][j] != '.') b.push_back(a[i][j]);
      }
    }

    for(int i = 0; i < b.size(); i++) {
      cout << b[i];
    }
    cout << endl;
  }
}