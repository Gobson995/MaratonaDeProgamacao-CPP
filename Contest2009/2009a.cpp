#include <bits/stdc++.h>

using namespace std;

int main () {
  int tc; cin >> tc;

  while (tc--) {
    int a, b; cin >> a >> b;
    int c;

    for (int i = a; i <=b; i++) {
      c = (i - a) + (b-i);

      if (a <= c && c <= b) {
        break;
      }
    }
    cout << c << endl;
  }
}