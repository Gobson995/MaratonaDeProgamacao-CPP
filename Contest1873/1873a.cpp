#include <bits/stdc++.h>

using namespace std;

int main () {
  int tc; cin >> tc;

  while (tc--) {
    string opa; cin >> opa;

    if (opa == "bca" || opa == "cab") cout << "NO"<< endl;
    else cout << "YES"<< endl;
  }
}