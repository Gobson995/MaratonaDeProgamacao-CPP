#include <bits/stdc++.h>
using namespace std;

int main() {
  int tc; cin >> tc;
  while (tc--) {
      int n; cin >> n;
      
      vector<int> a(n);
      for (int i = 0; i < n; i++) cin >> a[i];

      int d = set<int>(a.begin(), a.end()).size();

      int total = n - d;

      if (total % 2 == 0)
          cout << d << endl;
      else
          cout << d - 1 << endl;
  }
}