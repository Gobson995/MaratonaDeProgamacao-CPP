#include <bits/stdc++.h>

using namespace std;

int main () {
    int linha, coluna;

    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            int x; cin >> x;
            if (x == 1) {
                linha = i;
                coluna = j;
            }
        }
    }

    int movimentos = abs(linha - 3) + abs(coluna - 3);

    cout << movimentos << endl;
}