#include <bits/stdc++.h>

using namespace std;

int main () {
  int tc; cin >> tc;

  while (tc--) {
    int n; cin >> n;
    vector<string> mat(n);
    bool opa = false;

   for (int i = 0; i < n; i++) {
    cin >> mat[i];
    int cont = 0;
    for (int j = 0; j < n; j++) {
      string a = mat[i];
      if (a[j] == '1') cont++;
    }
    if (cont == 1) opa = true;
   }

    if (opa) cout << "TRIANGLE" << endl;
    else cout << "SQUARE" << endl;
  }
}