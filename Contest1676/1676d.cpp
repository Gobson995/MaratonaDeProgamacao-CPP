#include <bits/stdc++.h>
 
using namespace std;
 
int main () {
  int tc; cin >> tc;
 
  while (tc--) {
    int n, m; cin >> n >> m;
 
    vector<vector<int>> a(n, vector<int> (m));
 
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        cin >> a[i][j];
      }
    }
 
    unordered_map<int, int> diag1, diag2;
 
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        diag1[i-j] += a[i][j];
        diag2[i+j] += a[i][j];
      }
    }
 
    int resp = 0;
 
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        int total = diag1[i-j] + diag2[i+j] - a[i][j];
        resp = max(resp, total);
      }
    }
 
    cout << resp << endl;
  }
}