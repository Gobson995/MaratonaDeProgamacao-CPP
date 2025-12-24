#include <bits/stdc++.h>

using namespace std;

int main () {
  int tc; cin >> tc;

  while (tc--) {
    vector<int> x(4), y(4);
    for (int i = 0; i < 4; i++) {
      cin >> x[i] >> y[i];
    }

    sort(x.begin(), x.end());
    sort(y.begin(), y.end());

    int a, b;

    a = x[3] - x[0];
    b = y[3] - y[0];

    cout << a * b << endl;
  }
}