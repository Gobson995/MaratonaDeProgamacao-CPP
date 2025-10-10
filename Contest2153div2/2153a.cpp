#include <bits/stdc++.h>

using namespace std;

int main () {
  int tc; cin >> tc;

  while (tc--) {
    int n; cin >> n;

    vector<int> a(n);
    map<int,int> opa;

    for (int i = 0; i < n; i++) {
      cin >> a[i];
      opa[a[i]]++;
    }

    int resp = opa.size();

    cout << resp << endl;
  }
}