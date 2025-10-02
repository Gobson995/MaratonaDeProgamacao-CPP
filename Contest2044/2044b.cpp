#include <bits/stdc++.h>

using namespace std;

int main () {
  int tc; cin >> tc;

  while (tc--) {
    string a; cin >> a;

    vector<char>b;

    for (int i = (a.size()-1); i >= 0; i--) {
      if (a[i] == 'p') b.emplace_back('q');
      else if (a[i] == 'q') b.emplace_back('p');
      else b.emplace_back('w');
    }

    for (int i = 0; i < a.size(); i++) {
      cout << b[i];
    }
    cout << endl;
  }
}