#include <bits/stdc++.h>

using namespace std;

int main () {
  int tc; cin >> tc;

  while (tc--) {
    int n; cin >> n;
    vector<int> m(n);
    vector<string> s(n);

    for(int i = 0; i < n; i++) cin >> m[i] >> s[i];
    
    int a = 1e9, b = 1e9, c = 1e9;

    for(int i = 0; i < n; i++) {
      if (s[i] == "11") a = min(a, m[i]);
      if (s[i] == "01") b = min(b, m[i]);
      if (s[i] == "10") c = min(c, m[i]);
    }

    int resp = min(a,b+c);

    if (resp >= 1e9) cout << -1 << endl;
    else cout << resp << endl;
  }
}