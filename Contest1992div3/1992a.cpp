#include <bits/stdc++.h>

using namespace std;

int main () {
  int tc; cin >> tc;

  while (tc--) {
    vector<int> a(3);

    for (int i = 0; i < 3; i++) cin >> a[i];

    sort(a.begin(), a.end());

    for(int i = 0; i < 5; i++) {
      a[0]++;
      sort(a.begin(), a.end());
    }

    int resp = a[0] * a[1] * a[2];

    cout << resp << endl;


  }
}