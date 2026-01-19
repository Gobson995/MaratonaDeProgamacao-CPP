#include <bits/stdc++.h>

using namespace std;

int main () {
  int n; cin >> n;

  int pl = 0, il = 0;

  for(int i = 0; i < n; i++) {
    int x; cin >> x;
    if (x % 2 == 0) pl++;
    else il++;
  }

  int pr = 0, ir = 0;

  for(int i = 0; i < n; i++) {
    int x; cin >> x;
    if (x % 2 == 0) pr++;
    else ir++;
  }

  if (pl == ir && il == pr) cout << "SIM" << endl;
  else cout << "NAO" << endl;
}