#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
  int t;
  cin >> t;

  while (t--) {
    int a, b;
    cin >> a >> b;

    int x = a ^ b;


    if (a == b) {
      cout << 0 << endl;
    }
    else if (x <= a) {
      cout << 1 << endl << x << endl;
    }
    else if (a > b) {
      int mid = (a ^ b) / 2;
      int x1 = a ^ mid;
      int x2 = mid;

      cout << 2 << endl << x1 << " " << x2 << endl;
    }
    else {
      cout << -1 << endl;
    }

    
  }
}
