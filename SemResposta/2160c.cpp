#include <bits/stdc++.h>
using namespace std;

long long binario (int ver) {
  string bin = "";
  if (ver == 0) bin = "0";
  else {
    while (ver > 0) {
      bin += (ver % 2) + '0';
      ver /= 2;
    } 
  }

  long long resp = 0;
  for (char c : bin) resp = resp * 2 + (c - '0');

  return resp;
}

bool tem (long long n) {
  if (n == 0) return true;

  for (long long tamanho = 1; tamanho <= 30; tamanho++) {
    long long x = (long long)pow(2, tamanho - 1);
    long long compara = binario(x);
    if ((x ^ compara) == n) return true;
  }

  return false;
}

int main() {
  long long t; cin >> t;
  while (t--) {
    int n; cin >> n;
    if (tem(n)) cout << "YES" << endl;
    else cout << "NO" << endl;


  }
}
