#include <bits/stdc++.h>

using namespace std;

int main () {
  int tc; cin >> tc;

  while (tc--) {
    int n; cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++) cin >> a[i];

    sort(a.begin(), a.end());

    a[0]++;

    int resp = 1;

    for(int i = 0; i < n; i++) {
      resp *= a[i];
    }

    cout << resp << endl;
  }
}