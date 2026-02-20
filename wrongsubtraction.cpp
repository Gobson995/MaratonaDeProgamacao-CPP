#include <bits/stdc++.h>
#define int long long

using namespace std;

signed main () {
  int opa, n;
  cin >> opa >> n;

  while (n--) {
    if (opa % 10 != 0) opa--;
    else {
      string a = to_string(opa);
      a.pop_back();
      opa = stoi(a);
    }
  }

  cout << opa << endl;
}