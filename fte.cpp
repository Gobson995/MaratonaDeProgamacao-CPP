#include <bits/stdc++.h>

using namespace std;

int main () {
  int tc; cin >> tc;

  while (tc--) {
    string s; cin >> s;

    int a = s[0] - '0';
    int b = s[2] - '0';
    char c = s[1];

    if (c == '=') {
      s[2] = s[0];
      cout << s; 
    } 
    else if (c == '>') {
      if (a > b) cout << s;
      else cout << a << ">" << a-1;
    }
    else {
      if (a < b) cout << s;
      else cout << b-1 << "<" << b;
    }

    cout << endl;
  }
}