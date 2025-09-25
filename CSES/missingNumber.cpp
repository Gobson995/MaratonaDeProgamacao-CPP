#include <bits/stdc++.h>
#define int long long

using namespace std;

signed main () {
  int n; cin >> n;

  vector<int> a(n-1);
  for (int i = 0; i < (n-1);i++) {
    cin >> a[i];
  }

  sort(a.begin(), a.end());

  int resp = n;

  for (int i = 0; i < (n-1); i++) {
    if (a[i] != (i+1)) {
      resp = i+1;
      break;
    }
  }

  cout << resp << endl;
}