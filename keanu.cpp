#include <bits/stdc++.h>

using namespace std;

int main () {
  int n; cin >> n;

  int total = n*n;
  int brancas, pretas;

  if (n % 2 == 0) brancas = pretas = total /2;
  else {
    brancas = (total + 1) / 2;
    pretas = (total - 1) / 2;
  }

  cout << brancas << " casas brancas e " << pretas << " casas pretas" << endl;
}