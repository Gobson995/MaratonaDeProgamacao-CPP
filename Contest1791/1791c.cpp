#include <bits/stdc++.h>

using namespace std;

int main () {
  int tc; cin >> tc;

  while(tc--) {
    int n; cin >> n;
    string a; cin >> a;

    int direita = 0, esquerda = n - 1, tam = n;

    for (int i = 0; i <= (tam/2); i++) {
      int d = a[direita] - '0';
      int e = a[esquerda] - '0';
      if(d + e == 1) {
        n -= 2;
        direita++;
        esquerda--;
      }
      else {
        break;
      }
    }

    if (n < 0) n = 0;
    
    cout << n << endl;
  }
}