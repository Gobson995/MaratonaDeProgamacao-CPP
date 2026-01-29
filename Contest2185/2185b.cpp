#include <bits/stdc++.h>

using namespace std;

int calcular(vector<int> a) {
  int soma = 0;
  int maior = 0;

  for(int i = 0; i < a.size(); i++) {
    maior = max(maior, a[i]);
    soma += maior;
  }

  return soma;
}

int main () {
  int tc; cin >> tc;

  while (tc--) {
    int n; cin >> n;

    vector<int> a(n);

    for(int i = 0; i < n; i++) cin >> a[i];

    int resp = calcular(a);

    for(int i = 0; i < n; i++) {
      for(int j = i + 1; j < n; j++) {
        swap(a[i],a[j]);
        resp = max(resp, calcular(a));
        swap(a[i], a[j]);
      }
    }

    cout << resp << endl;
  }   
}