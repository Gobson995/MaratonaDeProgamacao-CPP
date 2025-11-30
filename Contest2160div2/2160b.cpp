#include <bits/stdc++.h>
using namespace std;

int main() {
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    vector<int> a(n + 1);
    int proximo_valor_novo = n;
    long long b_anterior = 0;

    for (int i = 1; i <= n; ++i) {
        long long b_atual;
        cin >> b_atual;

        long long pos_ultima_ocorrencia = (long long)i + b_anterior - b_atual;

        if (pos_ultima_ocorrencia == 0) {
            a[i] = proximo_valor_novo;
            proximo_valor_novo--;
        } else {
            a[i] = a[pos_ultima_ocorrencia];
        }

        b_anterior = b_atual;
    }

    for (int i = 1; i <= n; ++i) {
        cout << a[i] << (i == n ? "" : " ");
    }
    cout << "\n";
  }
}
