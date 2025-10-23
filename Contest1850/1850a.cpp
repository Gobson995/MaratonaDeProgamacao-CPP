#include <bits/stdc++.h>

using namespace std;

int main () {
  int tc; cin >> tc;

  while (tc--) {
    int a, b, c;
    cin >> a >> b >> c;

    int resp = 0;

    if (a + b >= 10) resp++;
    if (a + c >= 10) resp++;
    if (b + c >= 10) resp++;

    if (resp > 0) cout << "YES" << endl;
    else cout << "NO" << endl;
  }
}