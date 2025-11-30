#include <bits/stdc++.h>

using namespace std;

int main () {
  int tc; cin >> tc;

  while (tc--) {
    int n; cin >> n;

    vector<int> freq(102, 0);

    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        freq[x]++;
    }

    int mex = 0;

    while (mex <= 100 && freq[mex] > 0) {
      mex++;
    }
    cout << mex << endl;
  }
}