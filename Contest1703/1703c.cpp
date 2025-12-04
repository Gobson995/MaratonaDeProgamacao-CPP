#include <bits/stdc++.h>

using namespace std;

int main () {
  int tc; cin >> tc;

  while (tc--) {
    int n; cin >> n;

    vector<int>a(n), b(n);
    vector<string>opa(n);

    for (int i = 0; i < n; i++) cin >> a[i];

    for(int i = 0; i < n; i++) cin >> b[i] >> opa[i];

    for(int i = 0; i < n; i++) {
      int valor = a[i];
      for (int j = 0; j < b[i]; j++) { 
        if (opa[i][j] == 'D') valor++;
        else valor--;

        if(valor == 10) valor = 0;
        else if (valor < 0) valor = 9;
      }
      a[i] = valor;
    }

    for(int i = 0; i < n; i++) {
      if (i == (n-1)) cout << a[i] << endl;
      else cout << a[i] << " ";
    }
  }
}