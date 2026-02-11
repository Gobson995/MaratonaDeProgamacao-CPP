#include <bits/stdc++.h>

using namespace std;

int main () {
  int n; cin >> n;

  int resp = 0;

  for(int i = 0; i < n; i++) {
    int soma = 0;
    for(int j = 0; j < 3; j++) {
      int x; cin >> x;
      if (x == 1) soma++;
    }
    if (soma >= 2) resp++;
  }

  cout << resp << endl;
}