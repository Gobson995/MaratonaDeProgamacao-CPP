#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n, s;
    cin >> n >> s;

    vector<int> x(n);
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }

    int mn = x.front();
    int mx = x.back();

    int ans;

    if (s < mn) {
      ans = mx - s;
    } 
    else if (s > mx) {
      ans = s - mn;
    } 
    else {
      ans = (mx - mn) + min(s - mn, mx - s);
    }

    cout << ans << endl;
  }
}