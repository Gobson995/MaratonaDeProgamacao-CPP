#include <bits/stdc++.h>

using namespace std;

int main () {
  int n; cin >> n;

  int soma = 0, pesos = 0;

  for (int i = 0; i < n; i++) {
    int a, b; cin >> a >> b;

    soma += (a * b);
    pesos += b;
  }

  int resp = floor(soma/pesos);

  cout << resp << endl;
}