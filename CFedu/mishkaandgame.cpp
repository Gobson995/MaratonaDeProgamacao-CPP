#include <bits/stdc++.h>

using namespace std;

int main () {
  int n; cin >> n;

  int contm = 0, contc = 0;

  for (int i = 0; i < n; i++) {
    int m, c; cin >> m >> c;

    if (m > c) contm++;
    if (c > m) contc++;
  }

  if (contm > contc) cout << "Mishka";
  else if (contc > contm) cout << "Chris";
  else cout << "Friendship is magic!^^";

  cout << endl;
}