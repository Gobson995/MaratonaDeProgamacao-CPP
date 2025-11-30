#include <bits/stdc++.h>

using namespace std;

int main () {
  int tc; cin >> tc;

  while (tc--) {
    int n, m;
    string a, b, c;

    cin >> n;
    cin >> a;
    cin >> m;
    cin >> b;
    cin >> c;

    vector<char> resp;

    for (int i = 0; i < m; i++) {
      if (c[i] == 'V') resp.emplace_back(b[i]);
    }

    reverse(resp.begin(), resp.end());

    for (int i = 0; i < n; i++) {
      resp.emplace_back(a[i]);
    }

    for (int i = 0; i < m; i++) {
      if (c[i] == 'D') resp.emplace_back(b[i]);
    }

    for(int i = 0; i < n+m; i++) {
      cout << resp[i];
    }
    cout << endl;
  }
}