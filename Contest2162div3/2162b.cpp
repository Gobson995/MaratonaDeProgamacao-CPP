#include <bits/stdc++.h>
using namespace std;

bool verifica(string &b) {
  string pal = b;
  reverse(pal.begin(), pal.end());
  return pal == b;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int tc; 
  cin >> tc;

  while (tc--) {
    int n; cin >> n;
    string b; cin >> b;

    vector<int> resp;

    if (verifica(b)) {
      cout << 0 << endl;
      cout << endl;
    }
    else {
      int conta = 0;
      int pos = 0;
      for (int i = 0; i < n; i++) {
        if (b[i] == '0') {
          resp.push_back(i+1);
          pos++;
          conta++;
        }
      }

      cout << conta << endl;
      for (int i = 0; i < conta; i++) {
        if (i == (conta-1)) cout << resp[i] << endl;
        else cout << resp[i] << " ";
      }
    }
  }
}
