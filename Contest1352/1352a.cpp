#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;

    vector<int> partes;
    int place = 1;

    while (n > 0) {
      int digito = n % 10;
      if (digito != 0)
          partes.push_back(digito * place);
      n /= 10;
      place *= 10;
    }

    cout << partes.size() << endl;
    for (int x : partes) cout << x << " ";
    cout << endl;
  }
}