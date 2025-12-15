#include <bits/stdc++.h>

using namespace std;

int main () {
  int tc; cin >> tc;

  while (tc--) {
    int n, m; cin >> n >> m;

    int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0;

    char x;

    for (int i = 0; i < n; i++) {
      cin >> x;

      if (x == 'A') a++;
      if (x == 'B') b++;
      if (x == 'C') c++;
      if (x == 'D') d++;
      if (x == 'E') e++;
      if (x == 'F') f++;
      if (x == 'G') g++;
    }

    int resp = 0;

    if (a < m) resp += (m-a);
    if (b < m) resp += (m-b);
    if (c < m) resp += (m-c);
    if (d < m) resp += (m-d);
    if (e < m) resp += (m-e);
    if (f < m) resp += (m-f);
    if (g < m) resp += (m-g);

    cout << resp << endl;
    
  }
}