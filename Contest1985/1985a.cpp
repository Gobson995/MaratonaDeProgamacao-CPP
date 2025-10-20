#include <bits/stdc++.h>

using namespace std;

int main () {
  int tc; cin >> tc;

  while (tc--) {
    string a, b;
    cin >> a >> b;

    swap(a[0], b[0]);

    cout << a << " " << b << endl;
  }
}
