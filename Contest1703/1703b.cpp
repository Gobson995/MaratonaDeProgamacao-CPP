#include <bits/stdc++.h>

using namespace std;

int main () {
  int tc; cin >> tc;

  while (tc--) {
    int n; cin >> n;
    string s; cin >> s;
    map<char,int> opa;

    int resp = 0;
    for(int i = 0; i < n; i++) {
      opa[s[i]]++;
    }

    resp += opa.size();
    resp += n;

    cout << resp << endl;
  }
}