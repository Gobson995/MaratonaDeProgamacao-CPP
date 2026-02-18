#include <bits/stdc++.h>

using namespace std;

int main () {
  int n; cin >> n;

  int a = 0, b = 0;

  string opa; cin >> opa;

  for (int i = 0; i < n; i++) {
    if (opa[i] == 'A') a++;
    else b++;
  }

  if (a > b) cout << "Anton";
  else if (b > a) cout << "Danik";
  else cout << "Friendship";

  cout << endl;
}