#include <bits/stdc++.h>

using namespace std;

int main () {
  int tc; cin >> tc;

  while (tc--) {
    vector<vector<char>> opa(8, vector<char> (8));

    for (int i = 0; i < 8; i++) {
      for (int j = 0; j < 8; j++) {
        cin >> opa[i][j];
      }
    }

    int respi = 0, respj = 0;

    for (int i = 1; i < 7; i++) {
      for (int j = 1; j < 7; j++) {
        if ((opa[i-1][j-1] == '#') && (opa[i-1][j+1] == '#') && (opa[i+1][j-1] == '#') && (opa[i+1][j+1] == '#')) {
          respi = i;
          respj = j;
        }
      }
    }

    cout << respi + 1 << " " << respj + 1 << endl;
  }
}