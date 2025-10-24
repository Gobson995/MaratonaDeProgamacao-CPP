#include <bits/stdc++.h>

using namespace std;

int main () {
  int tc; cin >> tc;

  while (tc--) {
    string opa; cin >> opa;

    for (auto &c : opa) c = tolower(c);
    
    if (opa == "yes") cout << "YES" << endl;
    else cout << "NO" << endl;
  }
}