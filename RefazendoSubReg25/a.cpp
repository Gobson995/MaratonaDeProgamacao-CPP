#include <bits/stdc++.h>

using namespace std;

int main () {
  int n,m; cin >> n >> m;

  vector<vector<int>> mat(n, vector<int> (m));

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> mat[i][j];
    }
  }

  int resp = 0;

  for (int i = 0; i < m; i++) {
    int maior = 0;
    for (int j = 0; j < n; j++) {
      maior = max(mat[j][i], maior);
    }
    resp += maior;
  }

  cout << resp << endl;
  
}