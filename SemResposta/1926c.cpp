#include <bits/stdc++.h>

using namespace std;

int soma(int x) {
  int s = 0;
  while (x > 0) {
    s += x % 10;
    x /= 10;
  }
  return s;
}


int main () {
  int tc; cin >> tc;

  while (tc--) {
    int n; cin >> n;

    int resp = 0;

    for (int i = 1; i <= n; i++) {
      resp += soma(i);
    }

    cout << resp << endl;
  }
}