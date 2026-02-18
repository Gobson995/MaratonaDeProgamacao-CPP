#include <bits/stdc++.h>
#define int long long

using namespace std;

bool primo (long long x) {
  if (x < 2) return false;
  if (x == 2) return true;
  if (x % 2 == 0) return false;

  for (long long i = 3; i * i <= x; i += 2) {
    if (x % i == 0) return false; 
  }

  return true;
}

signed main () {
  int n; cin >> n;

  int opa = sqrt(n);

  if (opa * opa == n && primo(opa)) cout << "SIM";
  else cout << "NAO";

  cout << endl;
}
