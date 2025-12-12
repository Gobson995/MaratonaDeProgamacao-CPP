#include <bits/stdc++.h>

using namespace std;

int main () {
  int tc; cin >> tc;

  while (tc--) {
    int n; cin >> n;

    deque<int> a;

    a.push_back(n);

    int opa = n - 1;

    while (opa >= 1) {
      a.push_front(opa);
      opa--;
      if (opa >= 1) {
        a.push_back(opa);
        opa--;
      }
    }

    for (int i = 0; i < n; i++) {
      cout << a[i] << " ";
    }

    cout << endl;
  }
}