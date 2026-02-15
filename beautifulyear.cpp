#include <bits/stdc++.h>

using namespace std;

bool distintos(string s) {
    return s[0] != s[1] &&
           s[0] != s[2] &&
           s[0] != s[3] &&
           s[1] != s[2] &&
           s[1] != s[3] &&
           s[2] != s[3];
}

int main () {
  int n; cin >> n;

  while (true) {
    n++;
    string s = to_string(n);

    if (distintos(s)) {
      cout << n << endl;
      break;
    }
  }
}