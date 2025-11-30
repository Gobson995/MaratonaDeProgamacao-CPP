#include <bits/stdc++.h>

using namespace std;

int main () {
  int tc; cin >> tc;

  while (tc--) {
    int n; cin >> n;

    vector<vector<char>> mat (n, vector<char>(4));
    vector<int> resp(n);

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < 4; j++) {
        cin >> mat[i][j];
        if (mat[i][j] == '#') resp[i] = j + 1;
      }
    }

    reverse(resp.begin(), resp.end());

    for (int k = 0; k < n; k++) {
      cout << resp[k] << " ";
    }
    cout << endl;
  }
}