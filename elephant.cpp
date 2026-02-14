#include <bits/stdc++.h>

using namespace std;

int main () {
  int n; cin >> n;

  int soma = 0, resp = 0;

  while (soma < n) {
    soma += 5;
    resp++;
  }

  cout << resp << endl;
}