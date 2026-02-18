#include <bits/stdc++.h>

using namespace std;

int main () {
  int x, n; cin >> x >> n;

  if (n % x != 0) cout << "ERROU";
  else cout << n / x;
  
  cout << endl;
}