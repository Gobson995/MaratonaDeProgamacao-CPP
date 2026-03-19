#include <bits/stdc++.h>

using namespace std;

int main () {
    int n; cin >> n;

    int resposta = 0;

    resposta += n / 100;
    n %= 100;

    resposta += n / 20;
    n %= 20;

    resposta += n / 10;
    n %= 10;

    resposta += n / 5;
    n %= 5;

    resposta += n / 1;

    cout << resposta << endl;
}