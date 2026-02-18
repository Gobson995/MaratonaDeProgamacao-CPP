#include <bits/stdc++.h>

using namespace std;

int main () {
  vector<int> a(5), b(5);

  for (int i = 0; i < 5; i++) {
    cin >> a[i];
    b[i] = a[i];
  }

  sort(b.begin(), b.end());

  if (a == b) {
    cout << "C" << endl;
    return 0;
  }

  reverse(b.begin(), b.end());

  if (a == b) {
    cout << "D" << endl;
  }
  else cout << "N" << endl;
}